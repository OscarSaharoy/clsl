
#ifndef VEC3_H
#define VEC3_H
#include <cmath>
#include <functional>
#include <iostream>

class vec2 {
	public:

	float x;
	float y;

	vec2(float x, float y) : x(x), y(y) {}
	vec2(float x) : x(x), y(x) {}

	float operator[](int i) const { 
		float vals[2] = {x,y};
		return vals[i]; 
	}
	vec2& operator+=( const vec2& a ) {
		this->x += a.x;
		this->y += a.y;
		return *this;
	}
	vec2& operator+=( const float f ) {
		this->x += f;
		this->y += f;
		return *this;
	}
	vec2& operator-=( const vec2& a ) {
		this->x -= a.x;
		this->y -= a.y;
		return *this;
	}
	vec2& operator-=( const float f ) {
		this->x -= f;
		this->y -= f;
		return *this;
	}
	vec2& operator*=( const vec2& a ) {
		this->x *= a.x;
		this->y *= a.y;
		return *this;
	}
	vec2& operator*=( const float f ) {
		this->x *= f;
		this->y *= f;
		return *this;
	}
	vec2& operator/=( const vec2& a ) {
		this->x /= a.x;
		this->y /= a.y;
		return *this;
	}
	vec2& operator/=( const float f ) {
		this->x /= f;
		this->y /= f;
		return *this;
	}
};

class vec3 {
	public:

	float x;
	float y;
	float z;

	vec3(float x, float y, float z) : x(x), y(y), z(z) {}
	vec3(float x) : x(x), y(x), z(x) {}

	float operator[](int i) const { 
		float vals[3] = {x,y,z};
		return vals[i]; 
	}
	vec3& operator+=( const vec3& a ) {
		this->x += a.x;
		this->y += a.y;
		this->z += a.z;
		return *this;
	}
	vec3& operator+=( const float f ) {
		this->x += f;
		this->y += f;
		this->z += f;
		return *this;
	}
	vec3& operator-=( const vec3& a ) {
		this->x -= a.x;
		this->y -= a.y;
		this->z -= a.z;
		return *this;
	}
	vec3& operator-=( const float f ) {
		this->x -= f;
		this->y -= f;
		this->z -= f;
		return *this;
	}
	vec3& operator*=( const vec3& a ) {
		this->x *= a.x;
		this->y *= a.y;
		this->z *= a.z;
		return *this;
	}
	vec3& operator*=( const float f ) {
		this->x *= f;
		this->y *= f;
		this->z *= f;
		return *this;
	}
	vec3& operator/=( const vec3& a ) {
		this->x /= a.x;
		this->y /= a.y;
		this->z /= a.z;
		return *this;
	}
	vec3& operator/=( const float f ) {
		this->x /= f;
		this->y /= f;
		this->z /= f;
		return *this;
	}
};

class mat3 {
	public:

	float data[9] = {0,0,0,0,0,0,0,0,0};

	mat3(
		float a, float b, float c,
		float d, float e, float f,
		float g, float h, float i
	) {
		data[0] = a; data[1] = b; data[2] = c;
		data[3] = d; data[4] = e; data[5] = f;
		data[6] = g; data[7] = h; data[8] = i;
	}

	float operator[](int i) const { 
		return data[i]; 
	}
};

std::ostream& operator<<( std::ostream& os, const vec2& v ) {
	return ( os << "vec2(" << v.x << ", " << v.y <<  ")" );
}

std::ostream& operator<<( std::ostream& os, const vec3& v ) {
	return ( os << "vec3(" << v.x << ", " << v.y << ", " << v.z << ")" );
}


vec2 operator+( const vec2& a ) {
	return vec2( a.x, a.y );
}
vec2 operator+( const vec2& a, const vec2& b ) {
	return vec2( a.x+b.x, a.y+b.y );
}
vec2 operator+( const vec2& a, const float b ) {
	return vec2( a.x+b, a.y+b );
}
vec2 operator+( const float a, const vec2& b ) {
	return b + a;
}
vec3 operator+( const vec3& a ) {
	return vec3( a.x, a.y, a.z );
}
vec3 operator+( const vec3& a, const vec3& b ) {
	return vec3( a.x+b.x, a.y+b.y, a.z+b.z );
}
vec3 operator+( const vec3& a, const float b ) {
	return vec3( a.x+b, a.y+b, a.z+b );
}
vec3 operator+( const float a, const vec3& b ) {
	return b + a;
}


vec2 operator-( const vec2& a ) {
	return vec2( -a.x, -a.y );
}
vec2 operator-( const vec2& a, const vec2& b ) {
	return vec2( a.x-b.x, a.y-b.y );
}
vec2 operator-( const vec2& a, const float b ) {
	return vec2( a.x-b, a.y-b );
}
vec2 operator-( const float a, const vec2& b ) {
	return b - a;
}
vec3 operator-( const vec3& a ) {
	return vec3( -a.x, -a.y, -a.z );
}
vec3 operator-( const vec3& a, const vec3& b ) {
	return vec3( a.x-b.x, a.y-b.y, a.z-b.z );
}
vec3 operator-( const vec3& a, const float b ) {
	return vec3( a.x-b, a.y-b, a.z-b );
}
vec3 operator-( const float a, const vec3& b ) {
	return b - a;
}

vec2 operator*( const vec2& a, const vec2& b ) {
	return vec2( a.x*b.x, a.y*b.y );
}
vec2 operator*( const float a, const vec2& b ) {
	return vec2( a*b.x, a*b.y );
}
vec2 operator*( const vec2& a, const float b ) {
	return b * a;
}
vec3 operator*( const vec3& a, const vec3& b ) {
	return vec3( a.x*b.x, a.y*b.y, a.z*b.z );
}
vec3 operator*( const float a, const vec3& b ) {
	return vec3( a*b.x, a*b.y, a*b.z );
}
vec3 operator*( const vec3& a, const float b ) {
	return b * a;
}

vec2 operator/( const vec2& a, const float b ) {
	return vec2( a.x/b, a.y/b );
}
vec2 operator/( const vec2& a, const vec2& b ) {
	return vec2( a.x/b.x, a.y/b.y );
}
vec3 operator/( const vec3& a, const float b ) {
	return vec3( a.x/b, a.y/b, a.z/b );
}
vec3 operator/( const vec3& a, const vec3& b ) {
	return vec3( a.x/b.x, a.y/b.y, a.z/b.z );
}

float length( const vec2& v ) {
	return sqrt( v.x*v.x + v.y*v.y );
}
float length( const vec3& v ) {
	return sqrt( v.x*v.x + v.y*v.y + v.z*v.z );
}

float dot( const vec2& a, const vec2& b ) {
	return a.x*b.x + a.y*b.y;
}
float dot( const vec3& a, const vec3& b ) {
	return a.x*b.x + a.y*b.y + a.z*b.z;
}

vec2 pow( const vec2& a, const float f ) {
	return vec2( pow(a.x, f), pow(a.y, f) );
}
vec2 pow( const vec2& a, const vec2& b ) {
	return vec2( pow(a.x, b.x), pow(a.y, b.y) );
}
vec3 pow( const vec3& a, const float f ) {
	return vec3( pow(a.x, f), pow(a.y, f), pow(a.z, f) );
}
vec3 pow( const vec3& a, const vec3& b ) {
	return vec3( pow(a.x, b.x), pow(a.y, b.y), pow(a.z, b.z) );
}

vec3 cross( const vec3& a, const vec3& b ) {
	return vec3(
		a.y*b.z - a.z*b.y,
		a.z*b.x - a.x*b.z,
		a.x*b.y - a.y*b.x
	);
}

#define map2(func) \
vec2 func(const vec2& v) { \
	return vec2( func(v.x), func(v.y) ); \
}

map2(sin)
map2(cos)
map2(exp)

#define map3(func) \
vec3 func(const vec3& v) { \
	return vec3( func(v.x), func(v.y), func(v.z) ); \
}

map3(sin)
map3(cos)
map3(exp)

vec2 normalize(const vec2& a) {
	return a / length(a);
}
vec3 normalize(const vec3& a) {
	return a / length(a);
}

float clamp( float a, float min, float max ) {
    return a < min ? min : a > max ? max : a;
}
vec2 clamp( const vec2& a, const vec2& min, const vec2& max ) {
    return vec2( clamp( a.x, min.x, max.x ), clamp( a.y, min.y, max.y ) );
}
vec3 clamp( const vec3& a, const vec3& min, const vec3& max ) {
    return vec3( clamp( a.x, min.x, max.x ), clamp( a.y, min.y, max.y ), clamp( a.z, min.z, max.z ) );
}

vec3 raa(const vec3& p, float an, const vec3& ax) {
    float aligned = dot(p, ax);
    vec3 perp = p - ax * aligned;
    vec3 perp2 = cross(ax,perp);
    return ax * aligned 
		+ perp * cos(an)
		+ perp2 * sin(an);
}

vec3 raaf(const vec3& p, float an, const vec3& ax) {
    float aligned = dot(p, ax);
    vec3 perp = p - ax * aligned;
    vec3 perp2 = normalize(cross(ax,perp));

    return ax * aligned 
		+ perp * cos(an)
		+ perp2 * sin(an);
}

vec3 operator*( const mat3& m, const vec3& p ) {
	return vec3(
		m[0] * p[0] + m[1] * p[1] + m[2] * p[2],
		m[3] * p[0] + m[4] * p[1] + m[5] * p[2],
		m[6] * p[0] + m[7] * p[1] + m[8] * p[2]
	);
}

mat3 rot( float theta ) {
    return mat3( cos(theta), -sin(theta), 0.,
                 sin(theta),  cos(theta), 0.,
                         0.,          0., 1. );
}

#endif

