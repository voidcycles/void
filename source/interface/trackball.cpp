// ============================================================================================== //
//
// License:		The Lesser GNU Public License (LGPL) v3.0.
// 
// Author(s): 	Derek Gerstmann. The University of Western Australia (UWA). 
//				As well as the shoulders of many giants...
//
// This file is part of the Void framework.
//
// The Void framework is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// The Void framework is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with the Void framework.  If not, see <http://www.gnu.org/licenses/>.
//
// ============================================================================================== //

#include "interface/interface.h"
#include "interface/controls.h"
#include "interface/trackball.h"
#include "core/geometry.h"

// ============================================================================================== //

VD_INTERFACE_NAMESPACE_BEGIN();

// ============================================================================================== //

#if 0

TrackBall::TrackBall(
	const vd::graphics::Viewport& viewport, 
	CameraControlInterface::Mode mode) 
{
	SetMode(mode);
	SetViewport(viewport);
	Reset();
}

vd::flag
TrackBall::SetMode(
	CameraControlInterface::Mode mode) 
{
	m_Mode = mode;
	return VD_TRUE;
}

vd::flag
TrackBall::SetViewport(
	const vd::graphics::Viewport& viewport) 
{
    m_Viewport = viewport;
	m_Radius = std::max(m_Viewport.Width, m_Viewport.Height) * 2.5f;
	return VD_TRUE;
}

vd::flag
TrackBall::IsDone() const
{
	return m_IsActive == VD_FALSE;
}

vd::flag
TrackBall::IsActive() const
{
	return m_IsActive;
}

vd::flag 
TrackBall::Reset()
{
	m_IsDone = VD_TRUE;
    m_IsActive = VD_FALSE;
	m_Radius = Max(m_Viewport.Width, m_Viewport.Height) * 2.5f;
    m_Orientation = vd::q4f32(0.0f, 0.0f, 0.0f, 0.0f);
    m_PreviousTime = m_CurrentTime = 0;
	m_RadiansPerSec = 0.0f;
	
	ResetPosition();
	ResetGoal();
	ResetInertia();
	
	return VD_TRUE;
}

void
TrackBall::ResetPosition()
{
	m_StartPos = vd::v3f32(0.0f, 0.0f, 0.0f);
	m_CurrentPos = vd::v3f32(0.0f, 0.0f, 0.0f);
	m_PreviousPos = vd::v3f32(0.0f, 0.0f, 0.0f);
	m_DownPos = vd::v3f32(0.0f, 0.0f, 0.0f);
	m_MovePos = vd::v3f32(0.0f, 0.0f, 0.0f);
	m_UpPos = vd::v3f32(0.0f, 0.0f, 0.0f);
	m_Axis = vd::v3f32(0.0f, 1.0f, 0.0f);
}

void 
TrackBall::ResetGoal()
{
	vd::core::Memory::SetBytes(&m_Goal, 0, sizeof(TrackBall::Goal));
	
    m_Goal.IsActive = VD_FALSE;
	m_Goal.Microseconds = 0;
	m_Goal.StartOrientation = vd::q4f32(0.0f, 0.0f, 0.0f, 0.0f);
	m_Goal.EndOrientation = vd::q4f32(0.0f, 0.0f, 0.0f, 0.0f);
}

void 
TrackBall::ResetInertia()
{
	vd::core::Memory::SetBytes(&m_Inertia, 0, sizeof(TrackBall::Inertia));
	
    m_Inertia.IsActive = VD_FALSE;
	m_Inertia.RadiansPerSecond = 0.0f;
	m_Inertia.Axis = vd::v3f32(0.0f, 1.0f, 0.0f);
}

vd::flag 
TrackBall::OnMouseDown(
	vd::i32 x, vd::i32 y, vd::flag ctrl, vd::flag alt, vd::flag sys)
{
    m_RadiansPerSec = 0;
//    m_PreviousPos = m_CurrentPos = m_StartPos = vd::v3f32(0.0f, 0.0f, 0.0f);
    m_PreviousPos = m_CurrentPos = m_StartPos = MapToSphere(x, y);
    m_IsActive = VD_TRUE;
	m_Inertia.IsActive = VD_FALSE;
    m_DownPos = vd::v3f32(x, y, 0);
	m_MovePos = vd::v3f32(x, y, 0);	
	return m_IsActive;
}

vd::flag 
TrackBall::OnMouseUp(
	vd::i32 x, vd::i32 y, vd::flag ctrl, vd::flag alt, vd::flag sys)
{
    m_IsActive = VD_FALSE;

//    vd::q4f32 q = Rotation(m_StartPos, m_CurrentPos);
//    m_Orientation = Rotate(q, m_Orientation);

    if (m_RadiansPerSec > 0) {
        m_Inertia.IsActive = VD_FALSE;
        m_Inertia.RadiansPerSecond = m_RadiansPerSec;
        m_Inertia.Axis = m_Axis;
    }
    
    m_UpPos = vd::v3f32(x, y, 0.0f);
	m_MovePos = vd::v3f32(x, y, 0.0f);	
	return m_IsActive;
}

vd::flag 
TrackBall::OnMouseMove(vd::i32 x, vd::i32 y, vd::flag ctrl, vd::flag alt, vd::flag sys)
{
	if(!m_IsActive)
		return VD_FALSE;
		
	vd::v3f32 pos = m_MovePos - vd::v3f32(x, y, 0);
	vd::flag hit = Track( vd::v2i32(x, y) );
	if(hit)
		m_CurrentPos = m_LastPoint3D;
	
	/*
	// translate
//	m_CurrentPos = m_CurrentPos + Vector3f(pos[0] / m_Radius, -pos[1] / m_Radius, 0.0);
	
	// rotate
	m_CurrentPos = MapToSphere(x, y);
	
	float radians = ACos(m_PreviousPos.dot(m_CurrentPos));
	unsigned int ms = m_CurrentTime - m_PreviousTime;
	if (radians > 0.0001f && ms > 0) 
	{
		m_RadiansPerSec = 100000.0f * radians / ms;
		m_Axis = (m_PreviousPos.cross(m_CurrentPos));
		m_Axis.normalize();
	} 
	else 
	{
		m_RadiansPerSec = 0;
	}
 
 	if(m_IsActive)
 	{
		vd::q4f32 q = vd::core::rotation(m_StartPos, m_CurrentPos);
		m_Orientation = vd::core::rotate(q, m_Orientation); 	
 	}
 	*/
 	
	m_PreviousPos = m_CurrentPos;
	m_PreviousTime = m_CurrentTime;
	m_MovePos = vd::v3f32(x, y, 0);	
	return m_IsActive;
}

vd::q4f32 TrackBall::GetRotation() const
{
//	if (m_IsActive == VD_TRUE)
	return m_Orientation; // vd::core::Matrix3(m_Orientation);

    vd::q4f32 q = vd::core::OrientationFromUnitVectors(m_StartPos, m_CurrentPos);
    return q; // vd::core::Matrix3(vd::core::rotate(q, m_Orientation));
}

vd::v3f32 
TrackBall::MapToSphere(vd::i32 x, vd::i32 y)
{
    x = int(m_Viewport.Width) - x;
    const float SafeRadius = m_Radius * 0.99f;
    float fx = x - (float)m_Viewport.Width / 2.0f;
    float fy = y - (float)m_Viewport.Height / 2.0f;

    float lenSqr = fx*fx+fy*fy;
    
    if (lenSqr > SafeRadius*SafeRadius) 
    {
        float theta = atan2(fy, fx);
        fx = SafeRadius * cos(theta);
        fy = SafeRadius * sin(theta);
    }
    
    lenSqr = fx*fx+fy*fy;
    float z = sqrt(m_Radius*m_Radius - lenSqr);
    return vd::v3f32(fx, fy, z) / m_Radius;
}

vd::flag TrackBall::Update(vd::u64 dt)
{
    m_CurrentTime += dt;
	return VD_TRUE;
	
    if (m_Goal.IsActive) 
    {
        m_Goal.Microseconds += dt;
        float t = m_Goal.Microseconds / 200000.0f;
        
        if (t > 1) 
        {
            m_Orientation = m_Goal.EndOrientation;
            m_Goal.IsActive = VD_FALSE;
			m_IsActive = VD_FALSE;
		    return m_IsActive;
        }
        else
        {
			m_Orientation = vd::core::Slerp(t, m_Goal.StartOrientation, m_Goal.EndOrientation);
			m_Inertia.IsActive = VD_FALSE;
			m_IsActive = VD_FALSE;
		    return m_IsActive;
		}
    }

    if (m_Inertia.IsActive) 
    {
    	static float rate = 0.000005f;
        m_Inertia.RadiansPerSecond -= rate * 2.0f * dt;
        if (m_Inertia.RadiansPerSecond <= 0.0f) 
        {
            m_Inertia.IsActive = VD_FALSE;
            m_RadiansPerSec = 0;
//            ResetPosition();            
			m_IsActive = VD_TRUE;
		    return m_IsActive;
        } 
        else 
        {
        	float angle = m_Inertia.RadiansPerSecond * dt * rate;
            vd::q4f32 q = vd::core::OrientationFromAngleAxis(angle, m_Inertia.Axis);
            m_Orientation = (q * m_Orientation);
			m_IsActive = VD_TRUE;
			return m_IsActive;
        }
    }
    
    return m_IsActive;
}

vd::flag 
TrackBall::Track(
	const vd::v2i32 & point2D)
{
    vd::v3f32 newPoint3D;
    vd::flag newPointOk = MapToSphere(point2D, newPoint3D);

    if(m_LastPointOk && newPointOk)
    {
        vd::v3f32 axis = m_LastPoint3D.cross(newPoint3D).normalized();
        float cos_angle = m_LastPoint3D.dot(newPoint3D);

        if(fabs(cos_angle) < 1.0)
        {
            float angle = 2. * acos(cos_angle);
            m_Orientation = Quaternionf(vd::core::AngleAxisf(angle, axis));
/*
            m_Orientation.normalized();
            if(mMode == Around)
                mpCamera->rotateAroundTarget(Quaternionf(AngleAxisf(angle, axis)));
            else
                mpCamera->localRotate(Quaternionf(AngleAxisf(-angle, axis)));
*/
        }
    }

    m_LastPoint3D = newPoint3D;
    m_LastPointOk = newPointOk;
    return newPointOk;
}

vd::flag 
TrackBall::MapToSphere(
	const vd::v2i32 & p2, 
	vd::v3f32 & v3)
{
    if((p2.x() >= 0) && (p2.x() <= int(m_Viewport.Width)) &&
       (p2.y() >= 0) && (p2.y() <= int(m_Viewport.Height)))
    {
        double x  = (double)(p2.x() - 0.5 * m_Viewport.Width)  / (double)m_Viewport.Width;
        double y  = (double)(0.5 * m_Viewport.Height - p2.y()) / (double)m_Viewport.Height;
        double sinx         = sin(M_PI * x * 0.5);
        double siny         = sin(M_PI * y * 0.5);
        double sinx2siny2   = sinx * sinx + siny * siny;

        v3.x() = sinx;
        v3.y() = siny;
        v3.z() = sinx2siny2 < 1.0 ? sqrt(1.0 - sinx2siny2) : 0.0;

        return VD_TRUE;
    }
	return VD_FALSE;
}

float TrackBall::GetZoom() const { return m_Radius; }

vd::flag 
TrackBall::ReturnHome()
{
    m_Goal.IsActive = VD_TRUE;
    m_Goal.StartOrientation = m_Orientation;
    m_Goal.EndOrientation = vd::q4f32(0.0f, 0.0f, 0.0f, 0.0f);
    m_Goal.Microseconds = 0;
	return m_IsActive;
}

vd::flag
TrackBall::Goto(
	const vd::q4f32& q)
{
    m_Goal.IsActive = VD_TRUE;
    m_Goal.StartOrientation = m_Orientation;
    m_Goal.EndOrientation = q;
    m_Goal.Microseconds = 0;
	return m_IsActive;
}

#endif

// ============================================================================================== //

VD_INTERFACE_NAMESPACE_END();

// ============================================================================================== //

