
clsl: clsl.h clsl.cpp
	@ g++ clsl.cpp -o executable

run: clsl
	@ ./executable
	
tet:
	@ g++ tet.cpp -o executable-tet
	@ ./executable-tet
	
transmittance:
	@ g++ transmittance.cpp -o executable-transmittance 
	@ ./executable-transmittance
	
