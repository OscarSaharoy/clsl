#include <iostream>
#include "clsl.h"


void vecprint( const vec3& v ) {
	std::cout.precision(3);
	std::cout << 
		"vec3(" << v.x << ", " << v.y << ", " << v.z << "),"
	<< std::endl;
}

vec3 raag(const vec3& p, float an, const vec3& ax) {
    float aligned = dot(p, ax);
    vec3 perp = p - ax * aligned;
    vec3 perp2 = normalize(cross(ax,perp));
    return ax * aligned 
		+ perp * cos(an)
		+ perp2 * sin(an);
}

int main() {

	vec3 a = vec3( 1, 2, 3 );
	vec3 b = vec3( 4, 5, 6 );

	vec3 ax = vec3(0,0,1);
	vec3 r = raa(a, .5, ax);
	vec3 r1 = rot(.5) * a;

    vec3 top = vec3(0., 0., sqrt(3./8.));
    vec3 b1  = vec3(1./sqrt(3.), 0., -1./sqrt(24.));
    vec3 b2  = vec3(-1./sqrt(12.), 1./2., -1./sqrt(24.));
    vec3 b3  = vec3(-1./sqrt(12.), -1./2., -1./sqrt(24.));

    vec3 a1 = vec3( sqrt(3.)/2, 0., 1./2. );
    vec3 a2 = vec3( -sqrt(3.)/4., 3./4., 1./2. );
    vec3 a3 = vec3( -sqrt(3.)/4., -3./4., 1./2. );

	vec3 verts[4] = { top, b1, b2, b3 };
	vec3 axes[3] = { a1, a2, a3 };
	for( vec3 axis : axes )
		for( vec3 vert : verts )
			vecprint( normalize(raaf(vert, 0.6, axis)) );
}

