#include <iostream>
#include "clsl.h"

int main() {

	vec3 a = vec3( 1, 2, 3 );
	vec3 b = vec3( 4, 5, 6 );

	vec3 ax = vec3(0,0,1);
	vec3 r = raa(a, .5, ax);
	vec3 r1 = rot(.5) * a;
	
	std::cout << r << std::endl;
	std::cout << r1 << std::endl;
}

