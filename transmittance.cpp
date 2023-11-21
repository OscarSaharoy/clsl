
#include <iostream>
#include "clsl.h"

#define PI 3.14159
#define PHI 1.618033
#define UP vec3(0, 1, 0)
#define DOWN vec3(0, -1, 0)
#define SUN_DIST 151560000000. 
#define SUN_RADIUS 696340000. 
#define MOON_DIST 384400000. 
#define MOON_RADIUS 1737e+3 
#define EARTH_RADIUS 6360e+3
#define EARTH_CENTRE vec3(0,-EARTH_RADIUS,0)
#define ATMOSPHERE_RADIUS 6400e+3 //6460e+3
#define VIEWER_HEIGHT 2.
#define RI_AIR 1.000293
#define RI_WATER 1.333


vec3 opticalDepth( vec3 ro, vec3 rd ) {

	float r = 0.;
	float dtl = 100.;

	for( float tl = 0.; tl < 100000.; tl += dtl ) {
		
		vec3 spos = ro + rd * tl;
		float heightAboveSurface = 
			length(spos - EARTH_CENTRE) - EARTH_RADIUS;
		float dens = exp( -heightAboveSurface / 8000. );
		r += dtl * dens;
	}
	return r;
}

int main() {
	std::cout << 99 << std::endl;
}

