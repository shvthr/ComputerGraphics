#include "Satellite.h"
#include "Skybox.h"
#include <GL/glut.h>


class Space
{
private:
	Draw myDrawer;
	Satellite mySatellite;
	GLfloat earthRotationSpeed;
	Skybox skyBox;

	long int timeold, timenew, elapseTime;
public :
	
	/**
	 * draw the space and all its subparts; including satellite and earth
	 * first argument, satellite Mode( render only satellite, render the whole scene)
	 * second argument, view mode ( wireframe, fill)
	 */
	void draw(int,int);

	/**
	 * initialize the space and all its attributes
	 * a call to initalization of the satellite and the draw object is maid
	 *
	 */
	void init();
	/**
	 * calculate cpu tick time and put it in elapseTime
	 */
	void tickTime();

	/**
	 * rotate the earth
	 */
	void animateEarth();
	/**
	 * draw earth, with texture, on the center of the world
	 */
	void drawEarth();
	
	
};