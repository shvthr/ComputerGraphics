
#ifndef DRAW_HEADER
#define DRAW_HEADER
#include <GL\glut.h>
#include <GL\glu.h>
#include <GL\gl.h>
#include <math.h>
#include <vector>


	// VERTICES structure for holding information 
	// to draw the sphere
	typedef struct
	{
		double X;
		double Y;
		double Z;

		double U;
		double V;
	} VERTICES ;

	// holding information for NORMALS of the plain
	typedef struct
	{
		GLfloat X;
		GLfloat Y;
		GLfloat Z;

	} NORMAL;


	// PI number
	const double PI = 3.1415926535897;
	// space for drawing the sphere
	const int space = 10;

	// calculate the number of vertices
	const int VertexCount = (90 / space) * (360 / space) * 4;


	// drawing all the primitive 
class Draw
{
	
	
private:
	
	// uSize for the bezier 
	int uSize;

	// vSize for the bezier curve
	int vSize;

	// contorl point for the bezier curve
	GLfloat* ctrlPoints;

	// list of vertices for drawing the sphere
	VERTICES VERTEX[VertexCount];

	// list of NORMALS
	VERTICES NORM[VertexCount];
	// number of verteices for the sphere
	double NumOfVertex;

	// list of normals for the objects
	std::vector <NORMAL> normals;

public :

	// initialize all the normals
	void initNormals();

	// draw a cube with normals
	void drawCube();

	//draw a cylinder with or without the top/bottom circles
	void drawCylinder(int );

	// draw a skewed cylinder
	void drawSkewedCylinder(int,double);

	// draw a sphere with the specified radius and texture id
	void drawSphere(double,int );

	//load a specific bezier curve
	void loadBezier (int which);

	// load the satellite dish
	void loadSatelliteDish();

	// draw a circle using triangle fan
	void drawCircle();

	// draw the bezier curve 
	void drawBezier (int which);

	// draw a 3d polygon
	void drawPolygon3D();

	// load the sphere information
	void loadSphere(double,double,double,double);

	// calculate the normal given two vecotrs as the input
	// the function will calculate the cross product and return the result
	NORMAL calcNormal(GLfloat[],GLfloat[]);
	
};

#endif