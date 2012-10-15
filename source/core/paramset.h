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

#ifndef VD_CORE_PARAMSET_INCLUDED
#define VD_CORE_PARAMSET_INCLUDED

// ============================================================================================== //

#include "core/core.h"
#include "core/symbol.h"
#include "core/object.h"
#include "core/numerics.h"
#include "core/collections.h"
#include "constants/constants.h"

// ============================================================================================== //

VD_CORE_NAMESPACE_BEGIN();

// ============================================================================================== //

enum ScopeType
{
	InvalidScope,
	GlobalScope,
	ApplicationScope,
	ProgramScope,
	GraphicsScope,
	ShaderScope,
	StorageScope,
	ScopeCount
};

enum AccessType
{
	InvalidAccess,
	PublicAccess,
	PrivateAccess,
	InternalAccess,
	ScopeAccess,
	AccessCount
};

// ============================================================================================== //

template< class Type >
class Parameter
{
public:

    Parameter() :
        Changed(false),
        Scope(InvalidScope),
        Access(InvalidAccess)
    {

    }

    Parameter(
        const Core::Symbol n, 
    	const Type& v, 
    	const Type& i
    ) :
        Changed(true),
        Scope(GlobalScope),
        Access(PublicAccess),
        Name(n),
        Value(v),
        Initial(i)
    {

    }

    Parameter(
    	const Core::Symbol n, 
    	const Type& v,
    	AccessType access = PublicAccess,
    	ScopeType scope = GlobalScope
    ) :
        Changed(true),
        Scope(scope),
        Access(access),
        Name(n),
        Value(v),
        Initial(v)
    {

    }

    void Set(const Type& v)
    {
		Value = v;
		Changed = true;
    }
    
    const Type& Get() const
    {
        return Value;
    }
    
    void ClearChanges()
    {
        Changed = false;
    }

    void Reset()
    {
        Value = Initial;
        Changed = true;
    }
    
    const Core::Symbol GetName() const 
    { 
    	return Name; 
    }
    
public:

    bool Changed;
	ScopeType Scope;
	AccessType Access;
    Core::Symbol Name;
    Type Value;
    Type Initial;
};

// ============================================================================================== //

class ParamSet : public Core::Object
{
public:

	enum Type
	{
		Invalid,
        Str,
		Flag,
		I32,
		F32,
		V2F32,
		V3F32,
		V4F32,
		M3F32,
		M4F32,
		Count,
	};

	struct EmptyType
	{
        VD_FORCE_INLINE operator vd::string( ) const   { return vd::string(); }
		VD_FORCE_INLINE operator flag( ) const 	{ return Constants::PosInf; }
		VD_FORCE_INLINE operator i32( ) const 	{ return Constants::PosInf; }
		VD_FORCE_INLINE operator f32( ) const 	{ return Constants::PosInf; }
		VD_FORCE_INLINE operator v2f32( ) const { return v2f32(Constants::PosInf); }
		VD_FORCE_INLINE operator v3f32( ) const { return v3f32(Constants::PosInf); }
		VD_FORCE_INLINE operator v4f32( ) const { return v4f32(Constants::PosInf); }
		VD_FORCE_INLINE operator m3f32( ) const { return m3f32(Constants::Zero); }
		VD_FORCE_INLINE operator m4f32( ) const { return m4f32(Constants::Zero); }
	} Empty;

    typedef AlignedMap< vd::uid, ParamSet::Type, UidHash >::type 		 MapTypes;
    typedef AlignedMap< vd::uid, Parameter<vd::string>, UidHash >::type  MapStrings;
    typedef AlignedMap< vd::uid, Parameter<vd::flag>, UidHash >::type 	 MapFlags;
    typedef AlignedMap< vd::uid, Parameter<vd::i32>, UidHash >::type 	 MapI32;
    typedef AlignedMap< vd::uid, Parameter<vd::f32>, UidHash >::type 	 MapF32;
    typedef AlignedMap< vd::uid, Parameter<vd::v2f32>, UidHash >::type   MapV2F32;
    typedef AlignedMap< vd::uid, Parameter<vd::v3f32>, UidHash >::type   MapV3F32;
    typedef AlignedMap< vd::uid, Parameter<vd::v4f32>, UidHash >::type   MapV4F32;
    typedef AlignedMap< vd::uid, Parameter<vd::m3f32>, UidHash >::type   MapM3F32;
    typedef AlignedMap< vd::uid, Parameter<vd::m4f32>, UidHash >::type   MapM4F32;
    typedef Vector< vd::uid >::type                                      ParamVector;
	
public:

	ParamSet() : Core::Object() { }
	virtual ~ParamSet() { }

    bool AddStr(Core::Symbol name, const vd::string& value, 
        AccessType access = PublicAccess, 
        ScopeType scope = GlobalScope);
    
    bool Add1b(Core::Symbol name, vd::flag value, 
    	AccessType access = PublicAccess, 
    	ScopeType scope = GlobalScope);

    bool Add1i(Core::Symbol name, vd::i32 value, 
    	AccessType access = PublicAccess, 
    	ScopeType scope = GlobalScope);
        
    bool Add1f(Core::Symbol name, vd::f32 value, 
    	AccessType access = PublicAccess, 
    	ScopeType scope = GlobalScope);

    bool Add2f(Core::Symbol name, const vd::v2f32& value, 
    	AccessType access = PublicAccess, 
    	ScopeType scope = GlobalScope);
    
    bool Add3f(Core::Symbol name, const vd::v3f32& value, 
    	AccessType access = PublicAccess, 
    	ScopeType scope = GlobalScope);

    bool Add4f(Core::Symbol name, const vd::v4f32& value, 
    	AccessType access = PublicAccess, 
    	ScopeType scope = GlobalScope);

    bool Add3mf(Core::Symbol name, const vd::m3f32& value, 
    	AccessType access = PublicAccess, 
    	ScopeType scope = GlobalScope);    

    bool Add4mf(Core::Symbol name, const vd::m4f32& value, 
    	AccessType access = PublicAccess, 
    	ScopeType scope = GlobalScope);

	bool IsA(Type t, Core::Symbol name);
    bool IsUsed(Core::Symbol name);
    bool IsChanged(Core::Symbol name);
    bool ClearChanges(Core::Symbol name);

    vd::string GetStr(Core::Symbol name) const;
    vd::flag Get1b(Core::Symbol name) const;
    vd::i32 Get1i(Core::Symbol name) const;
    vd::f32 Get1f(Core::Symbol name) const;
    const vd::v2f32& Get2f(Core::Symbol name) const;
    const vd::v3f32& Get3f(Core::Symbol name) const;
    const vd::v4f32& Get4f(Core::Symbol name) const;
    const vd::m3f32& Get3mf(Core::Symbol name) const;
    const vd::m4f32& Get4mf(Core::Symbol name) const;

    vd::string GetStr(Core::Symbol name, const vd::string& missing) const;
    vd::flag Get1b(Core::Symbol name, vd::flag missing) const;
    vd::i32 Get1i(Core::Symbol name, vd::i32 missing) const;
    vd::f32 Get1f(Core::Symbol name, vd::f32 missing) const;
    const vd::v2f32& Get2f(Core::Symbol name, const vd::v2f32& missing) const;
    const vd::v3f32& Get3f(Core::Symbol name, const vd::v3f32& missing) const;
    const vd::v4f32& Get4f(Core::Symbol name, const vd::v4f32& missing) const;
    const vd::m3f32& Get3mf(Core::Symbol name, const vd::m3f32& missing) const;
    const vd::m4f32& Get4mf(Core::Symbol name, const vd::m4f32& missing) const;

    bool SetStr(Core::Symbol name, const vd::string& value);
    bool Set1i(Core::Symbol name, vd::i32 value);
    bool Set1b(Core::Symbol name, vd::flag value);
    bool Set1f(Core::Symbol name, vd::f32 value);
    bool Set2f(Core::Symbol name, const vd::v2f32& value);
    bool Set3f(Core::Symbol name, const vd::v3f32& value);
    bool Set4f(Core::Symbol name, const vd::v4f32& value);
    bool Set3mf(Core::Symbol name, const vd::m3f32& value);
    bool Set4mf(Core::Symbol name, const vd::m4f32& value);

    Parameter<vd::string>& GetParamStr(Core::Symbol name);
    Parameter<vd::flag>& GetParam1b(Core::Symbol name);
    Parameter<vd::i32>& GetParam1i(Core::Symbol name);
    Parameter<vd::f32>& GetParam1f(Core::Symbol name);
    Parameter<vd::v2f32>& GetParam2f(Core::Symbol name);
    Parameter<vd::v3f32>& GetParam3f(Core::Symbol name);
    Parameter<vd::v4f32>& GetParam4f(Core::Symbol name);
    Parameter<vd::m3f32>& GetParam3mf(Core::Symbol name);
    Parameter<vd::m4f32>& GetParam4mf(Core::Symbol name);

    bool Remove(Core::Symbol name);
    bool Reset(Core::Symbol name);
    bool IsStale() const;
    void ClearAllChanges();
    vd::bytesize GetChanges(ParamVector& params) const;
    vd::bytesize GetAllSymbols(ParamVector& params) const;
    const vd::symbol& GetSymbol(vd::uid uuid) const;
    bool Save(const vd::string& filename) const;

	size_t Size() const;
    vd::string ToString() const;
	void Clear();

	VD_DECLARE_OBJECT(ParamSet);

protected:

	VD_DISABLE_COPY_CONSTRUCTORS(ParamSet);

    MapTypes    m_Types;
    MapStrings  m_Strings;
    MapFlags    m_Flags;
    MapI32      m_i32;
    MapF32      m_f32;
    MapV2F32    m_v2f32;
    MapV3F32    m_v3f32;
    MapV4F32    m_v4f32;
    MapM3F32    m_m3f32;
    MapM4F32    m_m4f32;

};

// ============================================================================================== //

VD_CORE_NAMESPACE_END();

// ============================================================================================== //

#endif  // VD_CORE_PARAMSET_INCLUDED