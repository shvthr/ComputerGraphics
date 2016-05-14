
#include "Draw.h"
#include <vector>

/**
 * draw the middle parts of the satellite
 */
class MiddleParts
{
private:
	// object from Draw class, for drawing simple pirmitive,
	Draw myDrawer;
	// a vector containing all the normals of the objects
	std::vector<NORMAL> normals;
public:

	// initialize the middle part object
	void init(Draw);
	// calculate all the normals
	void calcualteNormals();
	// draw a simple connector
	void connector();
	// draw 5 connector together
	void connectors();
	// decoration for the connectors
	void connectorDecoration();
	// draw all the sub parts together
	void draw();
};