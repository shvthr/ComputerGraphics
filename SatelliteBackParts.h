#include "Draw.h"
#include <vector>


/**
 * draw the back parts of the satellite
 */
class BackParts
{
private:
	// object from Draw class, for drawing simple pirmitive,
	Draw myDrawer;
	// a vector containing all the normals of the objects
	std::vector<NORMAL> normals;
	
	
public:

	// initialize the backPart object
	void init(Draw);

	// calculate all the normals for subparts
	void calcualteNormals();

	// draw a fuel exhaust
	void fuelExhaust();

	// draw 3 fuel exhaust next to each other
	void fuelExhausts();

	// decoration for the exhaust
	void exhaustDecoration();

	// cylinder connectors for the exhaust
	void exhaustConnector();

	// draw all the subparts in back compartments
	void backCompartment();

	// draw the polygon at the back of the compartment
	void backCompartmentPoly();

	// draw the decoration on the right side of the compartment
	void backCompartmentDecorationRight();

	// draw the decoration on the left side of the compartment
	void backCompartmentDecorationTop();

	// draw the second decoariton on the right hand side
	void backCompartmentDecoration2ndRight();

	// draw the table like decorations on the compartment
	void cubeTable();

	// draw the small cubes on the compartment
	void littleCubeOnTopAndBottom();



	

};