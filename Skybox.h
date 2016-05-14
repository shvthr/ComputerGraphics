#include <GL\glut.h>
#include <GL\glu.h>
#include <GL\gl.h>

class Skybox
{
private: 
	GLfloat size;
public :
	// draw a simple textured skybox
	void draw();
	Skybox()
	{
		size = 2000;
	}

};