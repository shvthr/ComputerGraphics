
#include "SatelliteBackParts.h"
#include "SatelliteMiddleParts.h"


/**
 * Main class of the program. contains all the required parts to
 * draw a complete satellite
 */

class Satellite
{
private:
	// object of class Draw, for drawing simple primitive without the use of glut
	Draw myDrawer;

	// object from BackParts class for drawing the back parts of the satellite
	BackParts satelliteBackParts;

	// object from the MiddleParts class for drawing the middle parts of the satellite
	MiddleParts satelliteMiddleParts;
	// rotation spped of the satellite
	double satelliteRotationSpeed;
	
public:
	
	

	// initialize the satellite and all its subparts
	void init(Draw);

	// draw all the parts to gether
	void drawParts();
	
	// render the back part of the satellite
	void renderBackParts();

	// render the middle part of the satellite
	void renderMiddleParts();

	// draw the dish on the middle of the satellite
	void dishOnTop();

	BackParts getBackParts();
	MiddleParts getMiddleParts();
	void animateSatellite(long);
};