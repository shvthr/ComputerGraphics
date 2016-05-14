#include "SatelliteMiddleParts.h"


void MiddleParts::init(Draw _myDrawer)
{
	myDrawer = _myDrawer;
	
	calcualteNormals();
}

void MiddleParts::calcualteNormals()
{
	{ // 0 
		GLfloat v1[] = {2.0f,-3.0f,0.0f};
		GLfloat v2[] = {0.0f,0.0f,-20.0f};

		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{ // 1
		GLfloat v1[] = {-2.0f,-3.0f,0.0f};
		GLfloat v2[] = {0.0f,0.0f,20.0f};

		NORMAL norm = myDrawer.calcNormal(v1,v2);
		normals.push_back(norm);
	}
}

void MiddleParts::connector()
{
	glPushMatrix();
		glTranslatef(0.0f,0.0f,-1.0f);
		glRotatef(-90.0f,1.0f,0.0f,0.0f);
		glScalef(2.0f,1.0f,2.0f);
		myDrawer.drawSkewedCylinder(1.0f,2.0f);
		glTranslatef(0.0f,11.0f,0.0f);
		glPushMatrix();
			glScalef(1.0f,10.0f,1.0f);
			myDrawer.drawCylinder(1);
		glPopMatrix();
		glTranslatef(0.0f,11.0f,0.0f);
		glScalef(1.0f,-1.0f,1.0f);
		myDrawer.drawSkewedCylinder(1.0f,2.0f);
	glPopMatrix();
	glPushMatrix();
		connectorDecoration();
		glRotatef(120.0f,0.0f,0.0f,1.0f);
		connectorDecoration();
		glRotatef(120.0f,0.0f,0.0f,1.0f);
		connectorDecoration();
	glPopMatrix();
}

void MiddleParts::connectors()
{
	glPushMatrix();

	for(int i = 0 ; i < 5 ; i ++)
	{
		connector();
		glTranslatef(0.0f,0.0f,-24.0f);
	}
		
	glPopMatrix();
}

void MiddleParts::draw()
{
	glPushMatrix();
	connectors();
	glPopMatrix();
}

void MiddleParts::connectorDecoration()
{
	glPushMatrix();
		glTranslatef(0.0f,-4.0f,-2.0f);
		glPushMatrix();
			glBegin(GL_QUADS);
				glNormal3f(0.0f,1.0f,0.0f );
				glVertex3f(2.5f,0.0f,0.0f);
				glVertex3f(2.5f,0.0f,-20.0f);
				glVertex3f(-2.5f,0.0f,-20.0f);
				glVertex3f(-2.5f,0.0f,0.0f);

				glNormal3f(0.0f,-1.0f,0.0f );
				glVertex3f(-4.5f,-3.0f,0.0f);
				glVertex3f(-4.5f,-3.0f,-20.0f);
				glVertex3f(4.5f,-3.0f,-20.0f);
				glVertex3f(4.5f,-3.0f,0.0f);

				glNormal3f(0.0f,0.0f,1.0f );
				glVertex3f(2.5f,0.0f,0.0f);
				glVertex3f(-2.5f,0.0f,0.0f);
				glVertex3f(-4.5f,-3.0f,0.0f);
				glVertex3f(4.5f,-3.0f,0.0f);

				glNormal3f(0.0f,0.0f,-1.0f );
				glVertex3f(4.5f,-3.0f,-20.0f);
				glVertex3f(-4.5f,-3.0f,-20.0f);
				glVertex3f(-2.5f,0.0f,-20.0f);
				glVertex3f(2.5f,0.0f,-20.0f);

				glNormal3f(normals[0].X,normals[0].Y,normals[0].Z );
				glVertex3f(2.5f,0.0f,0.0f);
				glVertex3f(4.5f,-3.0f,0.0f);
				glVertex3f(4.5f,-3.0f,-20.0f);
				glVertex3f(2.5f,0.0f,-20.0f);

				glNormal3f(normals[1].X,normals[1].Y,normals[1].Z );
				glVertex3f(-2.5f,0.0f,-20.0f);
				glVertex3f(-4.5f,-3.0f,-20.0f);
				glVertex3f(-4.5f,-3.0f,0.0f);
				glVertex3f(-2.5f,0.0f,0.0f);
			glEnd();
		glPopMatrix();
	glPopMatrix();
}