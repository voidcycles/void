// -- VS

attribute vec2 Position;
attribute vec2 TexCoord;
varying vec2 vTexCoord;

void main()
{
    vTexCoord = vec2(TexCoord);
	gl_Position = vec4(Position.x, Position.y, 0.0, 1.0) * 2.0 - 1.0; 
}

