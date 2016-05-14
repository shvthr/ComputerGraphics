#include "SatelliteBackParts.h"
#include "Texture.hpp"
#include <GL/glut.h>


void BackParts::calcualteNormals()
{
	{	// 0
		GLfloat v1[] = {6.0f,-6.6f,0.0f};
		GLfloat v2[] = {2.0f,0.0f,-2.0f};
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 1
		GLfloat v1[] = {2.0f,0.0f,2.0};
		GLfloat v2[] = {6.0f,-6.6f,0.0f};
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 2
		GLfloat v1[] = {4.0f,-4.6f,0.0f};
		GLfloat v2[] = {0.0f,0.0f,-39.7f};
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}			
	{	// 3	
		GLfloat v1[] = {0.0f,-6.8f,0.0f};
		GLfloat v2[] = {1.0f,-1.0f,-2.0f};
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 4
		
		GLfloat v1[] = {-1.0f,1.0f,-2.0f};
		GLfloat v2[] = {-34.0f,0.0f,0.0f};		
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{
		// 5	
		GLfloat v1[] = {1.0f,-1.0f,2.0f};
		GLfloat v2[] = {0.0f,0.0f,-40.7f};
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{
		// 6
		GLfloat v1[] = {1.0f,1.0f,-2.0f};
		GLfloat v2[] = {0.0f,0.0f,-44.7f};
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 7
		GLfloat v1[] = {-34.0f,0.0f,0.0f};
		GLfloat v2[] = {-1.0f,1.0f,2.0f};		
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{
		// 8	
		GLfloat v1[] = {0.0f,-6.8f,0.0f};
		GLfloat v2[] = {5.0f,-2.0f,-5.0f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}	
	{	// 9
		GLfloat v1[] = {5.0f,-2.0f,-5.0f};
		GLfloat v2[] = {0.0f,0.0f,-35.4f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 10
		GLfloat v1[] = {0.0f,-2.8f,-0.0f};
		GLfloat v2[] = {-5.0f,2.0f,-5.2f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 11
		GLfloat v1[] = {5.0f,2.0f,5.2f};
		GLfloat v2[] = {0.0f,0.0f,35.4f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 12
		GLfloat v1[] = {0.0f,3.0f,-15.3f};
		GLfloat v2[] = {-34.0f,0.0f,0.0f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 13
		GLfloat v1[] = {4.0f,-4.6f,0.0f};
		GLfloat v2[] = {0.0f,3.0f,-15.3f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 14
		GLfloat v1[] = {0.0f,-4.8f,0.0f};
		GLfloat v2[] = {2.0f,1.0f,-15.3f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 15
		GLfloat v1[] = {2.0f,6.6f,0.0f};
		GLfloat v2[] = {0.0f,3.0f,15.3f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 16
		GLfloat v1[] = {-34.0f,0.0f,0.0f};
		GLfloat v2[] = {0.0f,3.0f,-15.3f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 17
		GLfloat v1[] = {6.0f,-6.4f,0.0f};
		GLfloat v2[] = {0.0f,0.0f,-80.0f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 18
		GLfloat v1[] = {-6.0f,-6.4f,0.0f};
		GLfloat v2[] = {0.0f,0.0f,-80.0f};			
		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
		
			
}

void BackParts::init(Draw _myDrawer)
{
	myDrawer = _myDrawer;
	
	calcualteNormals();
}

void BackParts::fuelExhaust()
{

	glPushMatrix();
		glColor3f(0.8f,0.8f,0.8f);

		glBegin(GL_QUADS);
			glVertex3f(6.92f,4.0,0.0f);
			glVertex3f(6.92f,-4.0,0.0f);
			glVertex3f(1.73f,-1.0,-16.0f);
			glVertex3f(1.73f,1.0,-16.0f);
		glEnd();

		glRotatef(60.0f,0.0f,0.0f,1.0f);

		glBegin(GL_QUADS);
			glVertex3f(6.92f,4.0,0.0f);
			glVertex3f(6.92f,-4.0,0.0f);
			glVertex3f(1.73f,-1.0,-16.0f);
			glVertex3f(1.73f,1.0,-16.0f);
		glEnd();

		glRotatef(60.0f,0.0f,0.0f,1.0f);

		glBegin(GL_QUADS);
			glVertex3f(6.92f,4.0,0.0f);
			glVertex3f(6.92f,-4.0,0.0f);
			glVertex3f(1.73f,-1.0,-16.0f);
			glVertex3f(1.73f,1.0,-16.0f);
		glEnd();

		glRotatef(60.0f,0.0f,0.0f,1.0f);

		glBegin(GL_QUADS);
			glVertex3f(6.92f,4.0,0.0f);
			glVertex3f(6.92f,-4.0,0.0f);
			glVertex3f(1.73f,-1.0,-16.0f);
			glVertex3f(1.73f,1.0,-16.0f);
		glEnd();

		glRotatef(60.0f,0.0f,0.0f,1.0f);

		glBegin(GL_QUADS);
			glVertex3f(6.92f,4.0,0.0f);
			glVertex3f(6.92f,-4.0,0.0f);
			glVertex3f(1.73f,-1.0,-16.0f);
			glVertex3f(1.73f,1.0,-16.0f);
		glEnd();

		glRotatef(60.0f,0.0f,0.0f,1.0f);

		glBegin(GL_QUADS);
			glVertex3f(6.92f,4.0,0.0f);
			glVertex3f(6.92f,-4.0,0.0f);
			glVertex3f(1.73f,-1.0,-16.0f);
			glVertex3f(1.73f,1.0,-16.0f);
		glEnd();
	glPopMatrix();
		
	glPushMatrix();
		//glColor3f(1.0f,0.0f,0.0f);
		glBegin(GL_POLYGON);
			glVertex3f(6.2f,	3.7f,-2.0f);
			glVertex3f(0.0f,	7.2f,-2.0f);
			glVertex3f(-6.2f,	3.7f,-2.0f);
			glVertex3f(-6.2f,	-3.7f,-2.0f);
			glVertex3f(0.0f,	-7.2f,-2.0f);
			glVertex3f(6.2f,	-3.7f,-2.0f);
		glEnd();
	glPopMatrix();
	glPushMatrix();

		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(7.2f,4.2f,-2.0f);
		glEnd();
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(6.92f,-4.0f,0.0f);
			glVertex3f(6.92f,4.0f,0.0f);
		glEnd();
		glBegin(GL_QUADS);
			glVertex3f(7.2f,4.2f,-2.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(6.2f,-3.7f,-2.0f);
			glVertex3f(6.2f,3.7f,-2.0f);
		glEnd();
		

		glRotatef(60.0f,0.0f,0.0f,1.0f);
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(7.2f,4.2f,-2.0f);
		glEnd();
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(6.92f,-4.0f,0.0f);
			glVertex3f(6.92f,4.0f,0.0f);
		glEnd();
			glBegin(GL_QUADS);
			glVertex3f(7.2f,4.2f,-2.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(6.2f,-3.7f,-2.0f);
			glVertex3f(6.2f,3.7f,-2.0f);
		glEnd();
		glRotatef(60.0f,0.0f,0.0f,1.0f);
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(7.2f,4.2f,-2.0f);
		glEnd();
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(6.92f,-4.0f,0.0f);
			glVertex3f(6.92f,4.0f,0.0f);
		glEnd();
			glBegin(GL_QUADS);
			glVertex3f(7.2f,4.2f,-2.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(6.2f,-3.7f,-2.0f);
			glVertex3f(6.2f,3.7f,-2.0f);
		glEnd();
		glRotatef(60.0f,0.0f,0.0f,1.0f);
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(7.2f,4.2f,-2.0f);
		glEnd();
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(6.92f,-4.0f,0.0f);
			glVertex3f(6.92f,4.0f,0.0f);
		glEnd();
			glBegin(GL_QUADS);
			glVertex3f(7.2f,4.2f,-2.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(6.2f,-3.7f,-2.0f);
			glVertex3f(6.2f,3.7f,-2.0f);
		glEnd();
		glRotatef(60.0f,0.0f,0.0f,1.0f);
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(7.2f,4.2f,-2.0f);
		glEnd();
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(6.92f,-4.0f,0.0f);
			glVertex3f(6.92f,4.0f,0.0f);
		glEnd();
			glBegin(GL_QUADS);
			glVertex3f(7.2f,4.2f,-2.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(6.2f,-3.7f,-2.0f);
			glVertex3f(6.2f,3.7f,-2.0f);
		glEnd();
		glRotatef(60.0f,0.0f,0.0f,1.0f);
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(7.2f,4.2f,-2.0f);
		glEnd();
		glBegin(GL_QUADS);
			glVertex3f(7.92f,4.6f,0.0f);
			glVertex3f(7.92f,-4.6f,0.0f);
			glVertex3f(6.92f,-4.0f,0.0f);
			glVertex3f(6.92f,4.0f,0.0f);
		glEnd();
			glBegin(GL_QUADS);
			glVertex3f(7.2f,4.2f,-2.0f);
			glVertex3f(7.2f,-4.2f,-2.0f);
			glVertex3f(6.2f,-3.7f,-2.0f);
			glVertex3f(6.2f,3.7f,-2.0f);
		glEnd();

	glPopMatrix();
	exhaustDecoration();
	exhaustConnector();
		

	
}

void BackParts::exhaustDecoration()
{
	// object color
	glColor3f(0.02f,0.007f,0.02f);
	glPushMatrix();
		glScalef(2.0f,2.0f,0.5f);
		glTranslatef(0.0f,1.5f,-1.0f);
		glRotatef(90.0,1.0f,0.0f,0.0f);
		myDrawer.drawCylinder(0);
		glPushMatrix();
			glTranslatef(0.0f,0.1f,0.0f);
			myDrawer.drawCircle();
		glPopMatrix();
		glTranslatef(0.0f,0.0f,3.0f);
		myDrawer.drawCylinder(0);
			glPushMatrix();
			glTranslatef(0.0f,0.1f,0.0f);
			myDrawer.drawCircle();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(1.5f,0.0,0.0f);
			glScalef(0.2f,0.2f,0.2f);
			myDrawer.drawCylinder(0);
			glPushMatrix();
				glTranslatef(0.0f,0.1f,0.0f);
				myDrawer.drawCircle();
			glPopMatrix();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(1.5f,0.0,-3.0f);
			glScalef(0.2f,0.2f,0.2f);
			myDrawer.drawCylinder(0);
			glPushMatrix();
				glTranslatef(0.0f,0.1f,0.0f);
				myDrawer.drawCircle();
			glPopMatrix();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-1.5f,0.0,-3.0f);
			glScalef(0.2f,0.2f,0.2f);
			myDrawer.drawCylinder(0);
			glPushMatrix();
				glTranslatef(0.0f,0.1f,0.0f);
				myDrawer.drawCircle();
			glPopMatrix();
		glPopMatrix();

	glPopMatrix();
}

void BackParts::exhaustConnector()
{
	glPushMatrix();
		glScalef(2.0f,2.0f,0.4f);
		glRotatef(90,1.0f,0.0f,0.0f);
		glTranslatef(0.0f,-41.0f,0.0f);
		myDrawer.drawCylinder(1);
		glTranslatef(0.0f,-9.0f,0.0f);
		glScalef(0.8f,8.0f,0.8f);
		myDrawer.drawSkewedCylinder(1,1.2);
		glScalef(1.2f,0.04f,1.2f);
		glTranslatef(0.0f,6.0f,0.0f);
		//glScalef(1.4f,0.1f,1.4f);
		myDrawer.drawCylinder(1);
		glScalef(1.1f,1.0f,1.1f);
		glTranslatef(0.0f,-15.0f,0.0f);
		myDrawer.drawCylinder(1);
		glScalef(0.7f,5.0f,0.7f);
		glTranslatef(0.0f,-4.0f,0.0f);
		myDrawer.drawCylinder(1);
		glScalef(1.4f,0.1f,1.4f);
		glTranslatef(0.0f,-12.0f,0.0f);
		myDrawer.drawCylinder(1);
	glPopMatrix();
}
// light tested
void BackParts::backCompartment()
{
	
	glPushMatrix();
		glScalef(1.0f,1.4f,0.7f);
		glTranslatef(0.0f,0.0f,-10.7f);
		glColor3f(0.7f,0.7f,0.7f);
		glPushMatrix();
			backCompartmentPoly();
			glRotatef(180,0.0f,1.0f,0.0f);
			glTranslatef(0.0f,0.0f,160);
			backCompartmentPoly();
		glPopMatrix();

	
		glPushMatrix();
			glTranslatef(0.0f,0.0f,-24.7f);
			glBegin(GL_QUADS);
				glNormal3f(normals[17].X,normals[17].Y,normals[17].Z);
				glVertex3f(17.0f,10.0f,-15.3f);
				glVertex3f(23.0f,3.4f,-15.3f);
				glVertex3f(23.0f,3.4f,-95.3f);
				glVertex3f(17.0f,10.0f,-95.3f);
				
				glNormal3f(1.0f,0.0f,0.0f);
				glVertex3f(23.0f,3.4f,-15.3f);
				glVertex3f(23.0f,-3.4f,-15.3f);
				glVertex3f(23.0f,-3.4f,-95.3f);
				glVertex3f(23.0f,3.4f,-95.3f);

				glNormal3f(normals[18].X,normals[18].Y,normals[18].Z);
				glVertex3f(23.0f,-3.4f,-15.3f);
				glVertex3f(17.0f,-10.0f,-15.3f);
				glVertex3f(17.0f,-10.0f,-95.3f);
				glVertex3f(23.0f,-3.4f,-95.3f);
			glEnd();

			glScalef(-1.0f,1.0f,1.0f);
			glBegin(GL_QUADS);
				glNormal3f(normals[17].X,normals[17].Y,normals[17].Z);
				glVertex3f(17.0f,10.0f,-15.3f);
				glVertex3f(23.0f,3.4f,-15.3f);
				glVertex3f(23.0f,3.4f,-95.3f);
				glVertex3f(17.0f,10.0f,-95.3f);
				
				glNormal3f(1.0f,0.0f,0.0f);
				glVertex3f(23.0f,3.4f,-15.3f);
				glVertex3f(23.0f,-3.4f,-15.3f);
				glVertex3f(23.0f,-3.4f,-95.3f);
				glVertex3f(23.0f,3.4f,-95.3f);

				glNormal3f(normals[18].X,normals[18].Y,normals[18].Z);
				glVertex3f(23.0f,-3.4f,-15.3f);
				glVertex3f(17.0f,-10.0f,-15.3f);
				glVertex3f(17.0f,-10.0f,-95.3f);
				glVertex3f(23.0f,-3.4f,-95.3f);
			glEnd();
		glPopMatrix();
	
		glPushMatrix();
			glTranslatef(0.0f,0.0f,-80.0f);
			glScalef(17.0f,10.0f,40.0f);
			myDrawer.drawCube();
		glPopMatrix();

		glPushMatrix();
			backCompartmentDecorationRight();
			backCompartmentDecoration2ndRight();
			glScalef(-1.0f,1.0f,1.0f);
			backCompartmentDecorationRight();
			backCompartmentDecoration2ndRight();
		glPopMatrix();
		glPushMatrix();
			backCompartmentDecorationTop();
			glScalef(1.0f,-1.0f,1.0f);
			backCompartmentDecorationTop();
		glPopMatrix();
	

	// table like decoration on the back compartment
	glPopMatrix();
	glPushMatrix();
		glPushMatrix();
			glScalef(0.8f,0.4f,0.4f);
			glPushMatrix();
				glTranslatef(0.0f,30.0f,-75.0f);
				glRotatef(22.0f,1.0f,0.0f,0.0f);
				cubeTable();
			glPopMatrix();
			glScalef(1.0f,-1.0f,1.0f);
			glPushMatrix();
				glTranslatef(0.0f,30.0f,-75.0f);
				glRotatef(22.0f,1.0f,0.0f,0.0f);
				cubeTable();
			glPopMatrix();
		glPopMatrix();
		glScalef(1.0f,1.0f,-1.0f);
		glTranslatef(0.0f,0.0f,127.5f);
		glPushMatrix();
			glScalef(0.8f,0.4f,0.4f);
			glPushMatrix();
				glTranslatef(0.0f,30.0f,-75.0f);
				glRotatef(22.0f,1.0f,0.0f,0.0f);
				cubeTable();
			glPopMatrix();
			glScalef(1.0f,-1.0f,1.0f);
			glPushMatrix();
				glTranslatef(0.0f,30.0f,-75.0f);
				glRotatef(22.0f,1.0f,0.0f,0.0f);
				cubeTable();
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();
	// end of table like decoration

	// little cube decoration on compartment
	glPushMatrix();
		glPushMatrix();
			glTranslatef(-7.0f,15.5f,-45.0f);
			littleCubeOnTopAndBottom();
			glTranslatef(14.0f,0.0f,0.0f);
			littleCubeOnTopAndBottom();
		glPopMatrix();
		glScalef(1.0f,-1.0f,1.0f);
		glPushMatrix();
			glTranslatef(-7.0f,15.5f,-45.0f);
			littleCubeOnTopAndBottom();
			glTranslatef(14.0f,0.0f,0.0f);
			littleCubeOnTopAndBottom();
		glPopMatrix();

	glPopMatrix();
}

// light tested
void BackParts::backCompartmentPoly()
{
	glPushMatrix();
		glTranslatef(0.0f,0.0f,-24.7f);
		glBegin(GL_POLYGON);
			glNormal3f(0.0f,0.0f,1.0f);
			glVertex3f(17.0f,7.0f,0.0f);
			glVertex3f(-17.0f,7.0f,0.0f);
			glVertex3f(-21.0f,2.4f,0.0f);
			glVertex3f(-21.0f,-2.4f,0.0f);
			glVertex3f(-15.0f,-7.0f,0.0f);
			glVertex3f(17.0f,-7.0f,0.0f);
			glVertex3f(21.0f,-2.4f,0.0f);
			glVertex3f(21.0f,2.4f,0.0f);
			glVertex3f(17.0f,7.0f,0.0f);
		glEnd();
		glBegin(GL_QUADS);
			
			glNormal3f(normals[12].X,normals[12].Y,normals[12].Z);
			glVertex3f(17.0f,7.0f,0.0f);
			glVertex3f(17.0f,10.0f,-15.3f);
			glVertex3f(-17.0f,10.0f,-15.3f);
			glVertex3f(-17.0f,7.0f,0.0f);

			glNormal3f(normals[13].X,normals[13].Y,normals[13].Z);
			glVertex3f(17.0f,7.0f,0.0f);
			glVertex3f(21.0f,2.4f,0.0f);
			glVertex3f(23.0f,3.4f,-15.3f);
			glVertex3f(17.0f,10.0f,-15.3f);


			glNormal3f(normals[14].X,normals[14].Y,normals[14].Z);
			glVertex3f(21.0f,2.4f,0.0f);
			glVertex3f(21.0f,-2.4f,0.0f);
			glVertex3f(23.0f,-3.4f,-15.3f);
			glVertex3f(23.0f,3.4f,-15.3f);

			glNormal3f(normals[15].X,normals[15].Y,normals[15].Z);
			glVertex3f(17.0f,-10.0f,-15.3f);
			glVertex3f(23.0f,-3.4f,-15.3f);
			glVertex3f(21.0f,-2.4f,0.0f);
			glVertex3f(17.0f,-7.0f,0.0f);
			
			
			
			glNormal3f(normals[16].X,normals[16].Y,normals[16].Z);
			glVertex3f(17.0f,-7.0f,0.0f);
			glVertex3f(-17.0f,-7.0f,0.0f);
			glVertex3f(-17.0f,-10.0f,-15.3f);
			glVertex3f(17.0f,-10.0f,-15.3f);
			
			
		glEnd();

		glScalef(-1.0f,1.0f,1.0f);
		glBegin(GL_POLYGON);
			glNormal3f(0.0f,0.0f,1.0f);
			glVertex3f(17.0f,7.0f,0.0f);
			glVertex3f(-17.0f,7.0f,0.0f);
			glVertex3f(-21.0f,2.4f,0.0f);
			glVertex3f(-21.0f,-2.4f,0.0f);
			glVertex3f(-15.0f,-7.0f,0.0f);
			glVertex3f(17.0f,-7.0f,0.0f);
			glVertex3f(21.0f,-2.4f,0.0f);
			glVertex3f(21.0f,2.4f,0.0f);
			glVertex3f(17.0f,7.0f,0.0f);
		glEnd();
		glBegin(GL_QUADS);
			
			glNormal3f(normals[12].X,normals[12].Y,normals[12].Z);
			glVertex3f(17.0f,7.0f,0.0f);
			glVertex3f(17.0f,10.0f,-15.3f);
			glVertex3f(-17.0f,10.0f,-15.3f);
			glVertex3f(-17.0f,7.0f,0.0f);

			glNormal3f(normals[13].X,normals[13].Y,normals[13].Z);
			glVertex3f(17.0f,7.0f,0.0f);
			glVertex3f(21.0f,2.4f,0.0f);
			glVertex3f(23.0f,3.4f,-15.3f);
			glVertex3f(17.0f,10.0f,-15.3f);

			
			glNormal3f(normals[14].X,normals[14].Y,normals[14].Z);
			glVertex3f(21.0f,2.4f,0.0f);
			glVertex3f(21.0f,-2.4f,0.0f);
			glVertex3f(23.0f,-3.4f,-15.3f);
			glVertex3f(23.0f,3.4f,-15.3f);
				

			glNormal3f(normals[15].X,normals[15].Y,normals[15].Z);
			glVertex3f(17.0f,-10.0f,-15.3f);
			glVertex3f(23.0f,-3.4f,-15.3f);
			glVertex3f(21.0f,-2.4f,0.0f);
			glVertex3f(17.0f,-7.0f,0.0f);
			
			
			
			glNormal3f(normals[16].X,normals[16].Y,normals[16].Z);
			glVertex3f(17.0f,-7.0f,0.0f);
			glVertex3f(-17.0f,-7.0f,0.0f);
			glVertex3f(-17.0f,-10.0f,-15.3f);
			glVertex3f(17.0f,-10.0f,-15.3f);
			
			
		glEnd();

	glPopMatrix();
}
// light tested
void BackParts::backCompartmentDecorationRight()
{
	glPushMatrix();
	
		glTranslatef(0.0f,0.0f,-24.7f);
		glBegin(GL_QUADS);

			
		

			glNormal3f(normals[0].X,normals[0].Y,normals[0].Z);
			glVertex3f(17.0f,10.0f,-15.3f);
			glVertex3f(23.0f,3.4f,-15.3f);
			glVertex3f(23.0f,5.4f,-17.3f);
			glVertex3f(19.0f,10.0f,-17.3f);

			glNormal3f(0.0f,1.0f,0.0f);
			glVertex3f(17.0f,10.0f,-15.3f);
			glVertex3f(19.0f,10.0f,-17.3f);
			glVertex3f(19.0f,10.0f,-58.0f);
			glVertex3f(17.0f,10.0f,-60.0f);


			
			glNormal3f(1.0f,0.0f,0.0f);
			glVertex3f(23.0f,5.4f,-17.3f);
			glVertex3f(23.0f,3.4f,-15.3f);
			glVertex3f(23.0f,3.4f,-60.0f);
			glVertex3f(23.0f,5.4f,-58.0f);

		
			glNormal3f(normals[1].X,normals[1].Y,normals[1].Z);
			glVertex3f(17.0f,10.0f,-60.0f);
			glVertex3f(19.0f,10.0f,-58.0f);
			glVertex3f(23.0f,5.4f,-58.0f);
			glVertex3f(23.0f,3.4f,-60.0f);


			
			glNormal3f(normals[2].X,normals[2].Y,normals[2].Z);
			glVertex3f(19.0f,10.0f,-17.3f);
			glVertex3f(23.0f,5.4f,-17.3f);	
			glVertex3f(23.0f,5.4f,-58.0f);	
			glVertex3f(19.0f,10.0f,-58.0f);	
		glEnd();
	
		glBegin(GL_QUADS);

		
			glNormal3f(normals[3].X,normals[3].Y,normals[3].Z);
			glVertex3f(23.0f,3.4f,-15.3f);
			glVertex3f(23.0f,-3.4f,-15.3f);
			glVertex3f(24.0f,-2.4f,-17.3f);
			glVertex3f(24.0f,2.4f,-17.3f);


			glNormal3f(0.7071f,0.7071f,0.0f);
			glVertex3f(23.0f,3.4f,-15.3f);
			glVertex3f(24.0f,2.4f,-17.3f);
			glVertex3f(24.0f,2.4f,-58.0f);
			glVertex3f(23.0f,3.4f,-60.0f);


			glNormal3f(0.0f,0.0f,-1.0f);
			glVertex3f(23.0f,3.4f,-60.0f);
			glVertex3f(24.0f,2.4f,-58.0f);
			glVertex3f(24.0f,-2.4f,-58.0f);
			glVertex3f(23.0f,-3.4f,-60.0f);


			glNormal3f(-0.7071f,-0.7071f,0.0f);
			glVertex3f(24.0f,-2.4f,-17.3f);
			glVertex3f(23.0f,-3.4f,-15.3f);
			glVertex3f(23.0f,-3.4f,-60.0f);
			glVertex3f(24.0f,-2.4f,-58.0f);
		
			
			glNormal3f(1.0f,0.0f,0.0f);
			glVertex3f(24.0f,2.4f,-17.3f);
			glVertex3f(24.0f,-2.4f,-17.3f);
			glVertex3f(24.0f,-2.4f,-58.0f);
			glVertex3f(24.0f,2.4f,-58.0f);


		glEnd();

		glScalef(1.0f,-1.0f,1.0f);
			glBegin(GL_QUADS);

			glNormal3f(0.0f,0.0f,1.0f);
			glVertex3f(17.0f,10.0f,-15.3f);
			glVertex3f(23.0f,3.4f,-15.3f);
			glVertex3f(23.0f,5.4f,-17.3f);
			glVertex3f(19.0f,10.0f,-17.3f);

			glNormal3f(0.0f,1.0f,0.0f);
			glVertex3f(17.0f,10.0f,-15.3f);
			glVertex3f(19.0f,10.0f,-17.3f);
			glVertex3f(19.0f,10.0f,-58.0f);
			glVertex3f(17.0f,10.0f,-60.0f);


			glNormal3f(1.0f,0.0f,0.0f);
			glVertex3f(23.0f,5.4f,-17.3f);
			glVertex3f(23.0f,3.4f,-15.3f);
			glVertex3f(23.0f,3.4f,-60.0f);
			glVertex3f(23.0f,5.4f,-58.0f);

			glNormal3f(0.0f,0.0f,-1.0f);
			glVertex3f(17.0f,10.0f,-60.0f);
			glVertex3f(19.0f,10.0f,-58.0f);
			glVertex3f(23.0f,5.4f,-58.0f);
			glVertex3f(23.0f,3.4f,-60.0f);


			// big quad on top
			glNormal3f(0.64f,0.764f,0.0f);
			glVertex3f(19.0f,10.0f,-17.3f);
			glVertex3f(23.0f,5.4f,-17.3f);	
			glVertex3f(23.0f,5.4f,-58.0f);	
			glVertex3f(19.0f,10.0f,-58.0f);	
		glEnd();
	
	glPopMatrix();
}

// light tested
void BackParts::backCompartmentDecorationTop()
{
	glPushMatrix();
		glTranslatef(0.0f,0.0f,-24.7f);
		
		// big quad on top
		glBegin(GL_QUADS);
		
		
			glNormal3f(normals[4].X,normals[4].Y,normals[4].Z);
			glVertex3f(17.0f,10.0f,-15.3f);
			glVertex3f(16.0f,11.0f,-17.3f);
			glVertex3f(-16.0f,11.0f,-17.3f);
			glVertex3f(-17.0f,10.0f,-15.3f);

		

			glNormal3f(normals[5].X,normals[5].Y,normals[5].Z);
			glVertex3f(16.0f,11.0f,-17.3f);
			glVertex3f(17.0f,10.0f,-15.3f);
			glVertex3f(17.0f,10.0f,-60.0f);
			glVertex3f(16.0f,11.0f,-58.0f);
		
		
			glNormal3f(normals[6].X,normals[6].Y,normals[6].Z);
			glVertex3f(-17.0f,10.0f,-15.3f);
			glVertex3f(-16.0f,11.0f,-17.3f);
			glVertex3f(-16.0f,11.0f,-58.0f);
			glVertex3f(-17.0f,10.0f,-60.0f);
			
			
		
			glNormal3f(normals[7].X,normals[7].Y,normals[7].Z);
			glVertex3f(17.0f,10.0f,-60.0f);
			glVertex3f(-17.0f,10.0f,-60.0f);
			glVertex3f(-16.0f,11.0f,-58.0f);
			glVertex3f(16.0f,11.0f,-58.0f);


			glNormal3f(0.0f,1.0f,0.0f);
			glVertex3f(-16.0f,11.0f,-17.3f);
			glVertex3f(16.0f,11.0f,-17.3f);
			glVertex3f(16.0f,11.0f,-58.0f);
			glVertex3f(-16.0f,11.0f,-58.0f);
			
			
			
		

			
		glEnd();
	glPopMatrix();
}

// light tested
void BackParts::backCompartmentDecoration2ndRight()
{
	glPushMatrix();
		glTranslatef(0.0f,0.0f,-69.6f);
		glBegin(GL_QUADS);

		
			glNormal3f(normals[8].X,normals[8].Y,normals[8].Z);
			glVertex3f(23.0f,3.4f,-15.0f);
			glVertex3f(23.0f,-3.4f,-15.0f);
			glVertex3f(28.0f,-1.4f,-20.0f);
			glVertex3f(28.0f,1.4f,-20.0f);

			glNormal3f(normals[9].X,normals[9].Y,normals[9].Z);
			glVertex3f(23.0f,3.4f,-15.0f);
			glVertex3f(28.0f,1.4f,-20.0f);
			glVertex3f(28.0f,1.4f,-45.2f);
			glVertex3f(23.0f,3.4f,-50.4f);

			glNormal3f(normals[10].X,normals[10].Y,normals[10].Z);
			glVertex3f(28.0f,1.4f,-45.2f);
			glVertex3f(28.0f,-1.4f,-45.2f);
			glVertex3f(23.0f,-3.4f,-50.4f);
			glVertex3f(23.0f,3.4f,-50.4f);

			glNormal3f(normals[11].X,normals[11].Y,normals[11].Z);
			glVertex3f(23.0f,-3.4f,-50.4f);
			glVertex3f(28.0f,-1.4f,-45.2f);
			glVertex3f(28.0f,-1.4f,-20.0f);
			glVertex3f(23.0f,-3.4f,-15.0f);

			glNormal3f(1.0f,0.0,0.0);
			glVertex3f(28.0f,1.4f,-20.0f);
			glVertex3f(28.0f,1.4f,-45.2f);
			glVertex3f(28.0f,-1.4f,-45.2f);
			glVertex3f(28.0f,-1.4f,-20.0f);
		
			
			
		glEnd();
	glPopMatrix();
}

// check
void BackParts::cubeTable()
{
	glPushMatrix();
		glPushMatrix();
			glTranslatef(-10.0f,0.0f,0.0f);
			glScalef(1.0f,0.2f,11.0f);
		
			for(int i = 0 ; i < 6;i++)
			{
				myDrawer.drawCube();
				glTranslatef(4.0f,0.0f,0.0f);
			}
		glPopMatrix();

		glRotatef(90.0f,0.0f,1.0f,0.0f);

		glPushMatrix();
			
			glTranslatef(-10.0f,0.0f,0.0f);
			glScalef(1.0f,0.2f,11.0f);
		
			for(int i = 0 ; i < 6;i++)
			{
				myDrawer.drawCube();
				glTranslatef(4.0f,0.0f,0.0f);
			}
		glPopMatrix();
	glPopMatrix();


}

void BackParts::littleCubeOnTopAndBottom()
{
	glPushMatrix();
		glScalef(2.0f,0.5f,4.0f);
		myDrawer.drawCube();
		glTranslatef(0.0f,1.0f,0.5f);
		glScalef(0.8f,0.5f,0.25f);
		myDrawer.drawCube();
		glTranslatef(0.0f,0.0f,-4.0f);
		myDrawer.drawCube();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-1.0f,0.8f,-2.0f);
		glScalef(0.2f,0.2f,0.2f);
		myDrawer.drawCube();
		glTranslatef(10.0f,0.0f,0.0f);
		myDrawer.drawCube();
		glTranslatef(0.0f,0.0f,20.0f);
		myDrawer.drawCube();
		glTranslatef(-10.0f,0.0f,0.0f);
		myDrawer.drawCube();
	glPopMatrix();

}

void BackParts::fuelExhausts()
{
	glPushMatrix();
		//glScalef(3.0f,3.0f,3.0f);
		glRotatef(70.0f,1.0f,0.0f,0.0f);
		glTranslatef(0.0f,-30.0f,25.0f);
		fuelExhaust();
		glTranslatef(-15.0f,0.0f,0.0f);
		fuelExhaust();
		glTranslatef(30.0f,0.0f,0.0f);
		fuelExhaust();
	glPopMatrix();
}