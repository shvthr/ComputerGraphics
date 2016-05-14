#include "Draw.h"
#include "Texture.hpp"
#include <cmath>

void Draw::initNormals()
{
	{	// 0
		GLfloat v1[] = {0.0f,-2.0f,0.0f};
		GLfloat v2[] = {-0.2f,0.0f,-0.203f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 1
		GLfloat v1[] = {0.0f,-2.0f,0.0f};
		GLfloat v2[] = {-0.2f,0.0f,-0.0632f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 2
		GLfloat v1[] = {0.0f,-2.0f,0.0f};
		GLfloat v2[] = {-0.2f,0.0f,-0.1165f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 3
		GLfloat v1[] = {0.0f,-2.0f,0.0f};
		GLfloat v2[] = {-0.2f,0.0f,-0.2f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	// 4 
		GLfloat v1[] = {0.0f,-2.0f,0.0f};
		GLfloat v2[] = {-0.1165f,0.0f,-0.2f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  5
		GLfloat v1[] = {0.0f,-2.0f,0.0f};
		GLfloat v2[] = {-0.0632f,0.0f,-0.2f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  6
		GLfloat v1[] = {0.0f,-2.0f,0.0f};
		GLfloat v2[] = {-0.203f,0.0f,-0.2f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  7
		GLfloat v1[] = {0.0f,-1.0f,0.0f};
		GLfloat v2[] = {0.7f,0.0f,-0.3f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  8
		GLfloat v1[] = {0.0f,-1.0f,0.0f};
		GLfloat v2[] = {0.3f,0.0f,-0.7f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  9
		GLfloat v1[] = {0.0f,-1.0f,0.0f};
		GLfloat v2[] = {-0.3f,0.0f,-0.7f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  10
		GLfloat v1[] = {0.0f,-1.0f,0.0f};
		GLfloat v2[] = {-0.7f,0.0f,-0.3f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  11
		GLfloat v1[] = {0.0f,-1.0f,0.0f};
		GLfloat v2[] = {-0.7f,0.0f,0.3f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  12
		GLfloat v1[] = {0.0f,-1.0f,0.0f};
		GLfloat v2[] = {-0.3f,0.0f,0.7f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  13
		GLfloat v1[] = {0.0f,-1.0f,0.0f};
		GLfloat v2[] = {0.3f,0.0f,7.0f};
			NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}
	{	//  14
		GLfloat v1[] = {0.0f,-1.0f,0.0f};
		GLfloat v2[] = {0.7f,0.0f,0.3f};
		NORMAL norm = calcNormal(v1,v2);
		normals.push_back(norm);
	}

}
void Draw::drawCube()
{
	glBegin(GL_QUADS);


	// front
	glNormal3f(0.0f,0.0f,-1.0f);
	glVertex3f(-1.0f,1.0f,-1.0f);
	glVertex3f(1.0f,1.0f,-1.0f);
	glVertex3f(1.0f,-1.0f,-1.0f);
	glVertex3f(-1.0f,-1.0f,-1.0f);

	//left
	glNormal3f(-1.0f,0.0f,0.0f);
	glVertex3f(-1.0f,-1.0f,-1.0f);
	glVertex3f(-1.0f,-1.0f,1.0f);
	glVertex3f(-1.0f,1.0f,1.0f);
	glVertex3f(-1.0f,1.0f,-1.0f);
	
	
	

	//back
	glNormal3f(0.0f,0.0f,1.0f);
	glVertex3f(-1.0f,1.0f,1.0f);
	glVertex3f(-1.0f,-1.0f,1.0f);
	glVertex3f(1.0f,-1.0f,1.0f);
	glVertex3f(1.0f,1.0f,1.0f);

	//right
	
	glNormal3f(1.0f,0.0f,0.0f);
	glVertex3f(1.0f,1.0f,1.0f);
	glVertex3f(1.0f,-1.0f,1.0f);
	glVertex3f(1.0f,-1.0f,-1.0f);
	glVertex3f(1.0f,1.0f,-1.0f);

	//top
	
	glNormal3f(0.0f,1.0f,0.0f);
	glVertex3f(-1.0f,1.0f,-1.0f);
	glVertex3f(-1.0f,1.0f,1.0f);
	glVertex3f(1.0f,1.0f,1.0f);
	glVertex3f(1.0f,1.0f,-1.0f);

	//bottom
	
	glNormal3f(0.0f,-1.0f,0.0f);
	glVertex3f(-1.0f,-1.0f,-1.0f);
	glVertex3f(1.0f,-1.0f,-1.0f);
	glVertex3f(1.0f,-1.0f,1.0f);
	glVertex3f(-1.0f,-1.0f,1.0f);

	glEnd();
}
void Draw::drawCylinder(int mode)
{
	glPushMatrix();
	// each begin and end is a quarter of 
	// a cylinder
	glBegin(GL_QUADS);

	glNormal3f(normals[0].X,normals[0].Y,normals[0].Z);

	glVertex3f(0.2f,1.0f,-0.9797f);
	glVertex3f(0.2f,-1.0f,-0.9797f);
	glVertex3f(0.0f,-1.0f,-1.0f);
	glVertex3f(0.0f,1.0f,-1.0f);

	glNormal3f(normals[1].X,normals[1].Y,normals[1].Z);
	
	glVertex3f(0.4f,1.0f,-0.9165f);
	glVertex3f(0.4f,-1.0f,-0.9165f);
	glVertex3f(0.2f,-1.0f,-0.9797f);
	glVertex3f(0.2f,1.0f,-0.9797f);

	glNormal3f(normals[2].X,normals[2].Y,normals[2].Z);
	
	glVertex3f(0.6f,1.0f,-0.8f);
	glVertex3f(0.6f,-1.0f,-0.8f);
	glVertex3f(0.4f,-1.0f,-0.9165f);
	glVertex3f(0.4f,1.0f,-0.9165f);
	

	glNormal3f(normals[3].X,normals[3].Y,normals[3].Z);
	
	glVertex3f(0.8f,1.0f,-0.6f);
	glVertex3f(0.8f,-1.0f,-0.6f);
	glVertex3f(0.6f,-1.0f,-0.8f);
	glVertex3f(0.6f,1.0f,-0.8f);

	glNormal3f(normals[4].X,normals[4].Y,normals[4].Z);
	
	glVertex3f(0.9165f,1.0f,-0.4f);
	glVertex3f(0.9165f,-1.0f,-0.4f);
	glVertex3f(0.8f,-1.0f,-0.6f);
	glVertex3f(0.8f,1.0f,-0.6f);

	glNormal3f(normals[5].X,normals[5].Y,normals[5].Z);
	
	glVertex3f(0.9797f,1.0f,-0.2f);
	glVertex3f(0.9797f,-1.0f,-0.2f);
	glVertex3f(0.9165f,-1.0f,-0.4f);
	glVertex3f(0.9165f,1.0f,-0.4f);

	glNormal3f(normals[6].X,normals[6].Y,normals[6].Z);
	
	glVertex3f(1.0f,1.0f,0.0f);
	glVertex3f(1.0f,-1.0f,0.0f);
	glVertex3f(0.9797f,-1.0f,-0.2f);
	glVertex3f(0.9797f,1.0f,-0.2f);

	glEnd();
	glRotatef(90.0f,0.0f,1.0f,0.0f);
	glBegin(GL_QUADS);

	
	glNormal3f(normals[0].X,normals[0].Y,normals[0].Z);

	glVertex3f(0.2f,1.0f,-0.9797f);
	glVertex3f(0.2f,-1.0f,-0.9797f);
	glVertex3f(0.0f,-1.0f,-1.0f);
	glVertex3f(0.0f,1.0f,-1.0f);

	glNormal3f(normals[1].X,normals[1].Y,normals[1].Z);
	
	glVertex3f(0.4f,1.0f,-0.9165f);
	glVertex3f(0.4f,-1.0f,-0.9165f);
	glVertex3f(0.2f,-1.0f,-0.9797f);
	glVertex3f(0.2f,1.0f,-0.9797f);

	glNormal3f(normals[2].X,normals[2].Y,normals[2].Z);
	
	glVertex3f(0.6f,1.0f,-0.8f);
	glVertex3f(0.6f,-1.0f,-0.8f);
	glVertex3f(0.4f,-1.0f,-0.9165f);
	glVertex3f(0.4f,1.0f,-0.9165f);
	

	glNormal3f(normals[3].X,normals[3].Y,normals[3].Z);
	
	glVertex3f(0.8f,1.0f,-0.6f);
	glVertex3f(0.8f,-1.0f,-0.6f);
	glVertex3f(0.6f,-1.0f,-0.8f);
	glVertex3f(0.6f,1.0f,-0.8f);

	glNormal3f(normals[4].X,normals[4].Y,normals[4].Z);
	
	glVertex3f(0.9165f,1.0f,-0.4f);
	glVertex3f(0.9165f,-1.0f,-0.4f);
	glVertex3f(0.8f,-1.0f,-0.6f);
	glVertex3f(0.8f,1.0f,-0.6f);

	glNormal3f(normals[5].X,normals[5].Y,normals[5].Z);
	
	glVertex3f(0.9797f,1.0f,-0.2f);
	glVertex3f(0.9797f,-1.0f,-0.2f);
	glVertex3f(0.9165f,-1.0f,-0.4f);
	glVertex3f(0.9165f,1.0f,-0.4f);

	glNormal3f(normals[6].X,normals[6].Y,normals[6].Z);
	
	glVertex3f(1.0f,1.0f,0.0f);
	glVertex3f(1.0f,-1.0f,0.0f);
	glVertex3f(0.9797f,-1.0f,-0.2f);
	glVertex3f(0.9797f,1.0f,-0.2f);

	glEnd();
	glRotatef(90.0f,0.0f,1.0f,0.0f);
	glBegin(GL_QUADS);

	
	glNormal3f(normals[0].X,normals[0].Y,normals[0].Z);

	glVertex3f(0.2f,1.0f,-0.9797f);
	glVertex3f(0.2f,-1.0f,-0.9797f);
	glVertex3f(0.0f,-1.0f,-1.0f);
	glVertex3f(0.0f,1.0f,-1.0f);

	glNormal3f(normals[1].X,normals[1].Y,normals[1].Z);
	
	glVertex3f(0.4f,1.0f,-0.9165f);
	glVertex3f(0.4f,-1.0f,-0.9165f);
	glVertex3f(0.2f,-1.0f,-0.9797f);
	glVertex3f(0.2f,1.0f,-0.9797f);

	glNormal3f(normals[2].X,normals[2].Y,normals[2].Z);
	
	glVertex3f(0.6f,1.0f,-0.8f);
	glVertex3f(0.6f,-1.0f,-0.8f);
	glVertex3f(0.4f,-1.0f,-0.9165f);
	glVertex3f(0.4f,1.0f,-0.9165f);
	

	glNormal3f(normals[3].X,normals[3].Y,normals[3].Z);
	
	glVertex3f(0.8f,1.0f,-0.6f);
	glVertex3f(0.8f,-1.0f,-0.6f);
	glVertex3f(0.6f,-1.0f,-0.8f);
	glVertex3f(0.6f,1.0f,-0.8f);

	glNormal3f(normals[4].X,normals[4].Y,normals[4].Z);
	
	glVertex3f(0.9165f,1.0f,-0.4f);
	glVertex3f(0.9165f,-1.0f,-0.4f);
	glVertex3f(0.8f,-1.0f,-0.6f);
	glVertex3f(0.8f,1.0f,-0.6f);

	glNormal3f(normals[5].X,normals[5].Y,normals[5].Z);
	
	glVertex3f(0.9797f,1.0f,-0.2f);
	glVertex3f(0.9797f,-1.0f,-0.2f);
	glVertex3f(0.9165f,-1.0f,-0.4f);
	glVertex3f(0.9165f,1.0f,-0.4f);

	glNormal3f(normals[6].X,normals[6].Y,normals[6].Z);
	
	glVertex3f(1.0f,1.0f,0.0f);
	glVertex3f(1.0f,-1.0f,0.0f);
	glVertex3f(0.9797f,-1.0f,-0.2f);
	glVertex3f(0.9797f,1.0f,-0.2f);

	glEnd();
	glRotatef(90.0f,0.0f,1.0f,0.0f);
	glBegin(GL_QUADS);

	
	glNormal3f(normals[0].X,normals[0].Y,normals[0].Z);

	glVertex3f(0.2f,1.0f,-0.9797f);
	glVertex3f(0.2f,-1.0f,-0.9797f);
	glVertex3f(0.0f,-1.0f,-1.0f);
	glVertex3f(0.0f,1.0f,-1.0f);

	glNormal3f(normals[1].X,normals[1].Y,normals[1].Z);
	
	glVertex3f(0.4f,1.0f,-0.9165f);
	glVertex3f(0.4f,-1.0f,-0.9165f);
	glVertex3f(0.2f,-1.0f,-0.9797f);
	glVertex3f(0.2f,1.0f,-0.9797f);

	glNormal3f(normals[2].X,normals[2].Y,normals[2].Z);
	
	glVertex3f(0.6f,1.0f,-0.8f);
	glVertex3f(0.6f,-1.0f,-0.8f);
	glVertex3f(0.4f,-1.0f,-0.9165f);
	glVertex3f(0.4f,1.0f,-0.9165f);
	

	glNormal3f(normals[3].X,normals[3].Y,normals[3].Z);
	
	glVertex3f(0.8f,1.0f,-0.6f);
	glVertex3f(0.8f,-1.0f,-0.6f);
	glVertex3f(0.6f,-1.0f,-0.8f);
	glVertex3f(0.6f,1.0f,-0.8f);

	glNormal3f(normals[4].X,normals[4].Y,normals[4].Z);
	
	glVertex3f(0.9165f,1.0f,-0.4f);
	glVertex3f(0.9165f,-1.0f,-0.4f);
	glVertex3f(0.8f,-1.0f,-0.6f);
	glVertex3f(0.8f,1.0f,-0.6f);

	glNormal3f(normals[5].X,normals[5].Y,normals[5].Z);
	
	glVertex3f(0.9797f,1.0f,-0.2f);
	glVertex3f(0.9797f,-1.0f,-0.2f);
	glVertex3f(0.9165f,-1.0f,-0.4f);
	glVertex3f(0.9165f,1.0f,-0.4f);

	glNormal3f(normals[6].X,normals[6].Y,normals[6].Z);
	
	glVertex3f(1.0f,1.0f,0.0f);
	glVertex3f(1.0f,-1.0f,0.0f);
	glVertex3f(0.9797f,-1.0f,-0.2f);
	glVertex3f(0.9797f,1.0f,-0.2f);
	glEnd();

	if(mode == 1)
	{
	glPushMatrix();
	glPushMatrix();
	//draw the circle on top 
	glTranslatef(0.0f,1.0f,0.0f);
	drawCircle();
	glPopMatrix();
	glPushMatrix();
	// draw the circle on bottom
	glScalef(1.0f,-1.0f,1.0f);
	glTranslatef(0.0f,1.0f,0.0f);
	drawCircle();
	glPopMatrix();
	glPopMatrix();
	}


	glPopMatrix();
	
}
void Draw::drawSkewedCylinder(int mode,double fraction)
{
	glPushMatrix();
	// each begin and end is a quarter of 
	// a cylinder
		glBegin(GL_QUADS);

			{		
				GLfloat v1[] = {0.2f * (fraction-1),-2.0f,-0.9797f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.203f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}

			glVertex3f(0.2f ,1.0f,-0.9797f);
			glVertex3f(fraction*0.2f,-1.0f,fraction*-0.9797f);
			glVertex3f(0.0f,-1.0f,fraction*-1.0f);
			glVertex3f(0.0f,1.0f,-1.0f);

			{		
				GLfloat v1[] = {0.4f * (fraction -1),-2.0f,-0.9165f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.0632f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.4f,1.0f,-0.9165f);
			glVertex3f(fraction*0.4f,-1.0f,fraction*-0.9165f);
			glVertex3f(fraction*0.2f,-1.0f,fraction*-0.9797f);
			glVertex3f(0.2f,1.0f,-0.9797f);

			{		
				GLfloat v1[] = {0.6f * (fraction -1),-2.0f,-0.8f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.1165f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.6f,1.0f,-0.8f);
			glVertex3f(fraction*0.6f,-1.0f,fraction*-0.8f);
			glVertex3f(fraction*0.4f,-1.0f,fraction*-0.9165f);
			glVertex3f(0.4f,1.0f,-0.9165f);
	

			{		
				GLfloat v1[] = {0.8f * (fraction -1),-2.0f,-0.6f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.8f,1.0f,-0.6f);
			glVertex3f(fraction*0.8f,-1.0f,fraction*-0.6f);
			glVertex3f(fraction*0.6f,-1.0f,fraction*-0.8f);
			glVertex3f(0.6f,1.0f,-0.8f);

			{		
				GLfloat v1[] = {0.9165f * (fraction -1),-2.0f,-0.4f * (fraction - 1)};
				GLfloat v2[] = {-0.1165f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.9165f,1.0f,-0.4f);
			glVertex3f(fraction*0.9165f,-1.0f,fraction*-0.4f);
			glVertex3f(fraction*0.8f,-1.0f,fraction*-0.6f);
			glVertex3f(0.8f,1.0f,-0.6f);

			{		
				GLfloat v1[] = {0.9797f * (fraction -1),-2.0f,-0.2f * (fraction - 1)};
				GLfloat v2[] = {-0.0632f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.9797f,1.0f,-0.2f);
			glVertex3f(fraction*0.9797f,-1.0f,fraction*-0.2f);
			glVertex3f(fraction*0.9165f,-1.0f,fraction*-0.4f);
			glVertex3f(0.9165f,1.0f,-0.4f);

			{		
				GLfloat v1[] = {1.0f * (fraction -1),-2.0f,-0.0f * (fraction - 1)};
				GLfloat v2[] = {-0.203f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(1.0f,1.0f,0.0f);
			glVertex3f(fraction*1.0f,-1.0f,0.0f);
			glVertex3f(fraction*0.9797f,-1.0f,fraction*-0.2f);
			glVertex3f(0.9797f,1.0f,-0.2f);

		glEnd();
		glRotatef(90.0f,0.0f,1.0f,0.0f);
		glBegin(GL_QUADS);

			{		
				GLfloat v1[]= {0.2f * (fraction -1),-2.0f,-0.9797f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.203f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}

			glVertex3f(0.2f ,1.0f,-0.9797f);
			glVertex3f(fraction*0.2f,-1.0f,fraction*-0.9797f);
			glVertex3f(0.0f,-1.0f,fraction*-1.0f);
			glVertex3f(0.0f,1.0f,-1.0f);

			{		
				GLfloat v1[]= {0.4f * (fraction -1),-2.0f,-0.9165f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.0632f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.4f,1.0f,-0.9165f);
			glVertex3f(fraction*0.4f,-1.0f,fraction*-0.9165f);
			glVertex3f(fraction*0.2f,-1.0f,fraction*-0.9797f);
			glVertex3f(0.2f,1.0f,-0.9797f);

			{		
				GLfloat v1[]= {0.6f * (fraction -1),-2.0f,-0.8f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.1165f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.6f,1.0f,-0.8f);
			glVertex3f(fraction*0.6f,-1.0f,fraction*-0.8f);
			glVertex3f(fraction*0.4f,-1.0f,fraction*-0.9165f);
			glVertex3f(0.4f,1.0f,-0.9165f);
	

			{		
				GLfloat v1[]= {0.8f * (fraction -1),-2.0f,-0.6f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.8f,1.0f,-0.6f);
			glVertex3f(fraction*0.8f,-1.0f,fraction*-0.6f);
			glVertex3f(fraction*0.6f,-1.0f,fraction*-0.8f);
			glVertex3f(0.6f,1.0f,-0.8f);

			{		
				GLfloat v1[]= {0.9165f * (fraction -1),-2.0f,-0.4f * (fraction - 1)};
				GLfloat v2[] = {-0.1165f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.9165f,1.0f,-0.4f);
			glVertex3f(fraction*0.9165f,-1.0f,fraction*-0.4f);
			glVertex3f(fraction*0.8f,-1.0f,fraction*-0.6f);
			glVertex3f(0.8f,1.0f,-0.6f);

			{		
				GLfloat v1[]= {0.9797f * (fraction -1),-2.0f,-0.2f * (fraction - 1)};
				GLfloat v2[] = {-0.0632f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.9797f,1.0f,-0.2f);
			glVertex3f(fraction*0.9797f,-1.0f,fraction*-0.2f);
			glVertex3f(fraction*0.9165f,-1.0f,fraction*-0.4f);
			glVertex3f(0.9165f,1.0f,-0.4f);

			{		
				GLfloat v1[]= {1.0f * (fraction -1),-2.0f,-0.0f * (fraction - 1)};
				GLfloat v2[] = {-0.203f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(1.0f,1.0f,0.0f);
			glVertex3f(fraction*1.0f,-1.0f,0.0f);
			glVertex3f(fraction*0.9797f,-1.0f,fraction*-0.2f);
			glVertex3f(0.9797f,1.0f,-0.2f);

		glEnd();
		glRotatef(90.0f,0.0f,1.0f,0.0f);
			glBegin(GL_QUADS);

				{		
				GLfloat v1[]= {0.2f * (fraction -1),-2.0f,-0.9797f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.203f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}

			glVertex3f(0.2f ,1.0f,-0.9797f);
			glVertex3f(fraction*0.2f,-1.0f,fraction*-0.9797f);
			glVertex3f(0.0f,-1.0f,fraction*-1.0f);
			glVertex3f(0.0f,1.0f,-1.0f);

			{		
				GLfloat v1[]= {0.4f * (fraction -1),-2.0f,-0.9165f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.0632f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.4f,1.0f,-0.9165f);
			glVertex3f(fraction*0.4f,-1.0f,fraction*-0.9165f);
			glVertex3f(fraction*0.2f,-1.0f,fraction*-0.9797f);
			glVertex3f(0.2f,1.0f,-0.9797f);

			{		
				GLfloat v1[]= {0.6f * (fraction -1),-2.0f,-0.8f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.1165f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.6f,1.0f,-0.8f);
			glVertex3f(fraction*0.6f,-1.0f,fraction*-0.8f);
			glVertex3f(fraction*0.4f,-1.0f,fraction*-0.9165f);
			glVertex3f(0.4f,1.0f,-0.9165f);
	

			{		
				GLfloat v1[]= {0.8f * (fraction -1),-2.0f,-0.6f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.8f,1.0f,-0.6f);
			glVertex3f(fraction*0.8f,-1.0f,fraction*-0.6f);
			glVertex3f(fraction*0.6f,-1.0f,fraction*-0.8f);
			glVertex3f(0.6f,1.0f,-0.8f);

			{		
				GLfloat v1[]= {0.9165f * (fraction -1),-2.0f,-0.4f * (fraction - 1)};
				GLfloat v2[] = {-0.1165f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.9165f,1.0f,-0.4f);
			glVertex3f(fraction*0.9165f,-1.0f,fraction*-0.4f);
			glVertex3f(fraction*0.8f,-1.0f,fraction*-0.6f);
			glVertex3f(0.8f,1.0f,-0.6f);

			{		
				GLfloat v1[]= {0.9797f * (fraction -1),-2.0f,-0.2f * (fraction - 1)};
				GLfloat v2[] = {-0.0632f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.9797f,1.0f,-0.2f);
			glVertex3f(fraction*0.9797f,-1.0f,fraction*-0.2f);
			glVertex3f(fraction*0.9165f,-1.0f,fraction*-0.4f);
			glVertex3f(0.9165f,1.0f,-0.4f);

			{		
				GLfloat v1[]= {1.0f * (fraction -1),-2.0f,-0.0f * (fraction - 1)};
				GLfloat v2[] = {-0.203f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(1.0f,1.0f,0.0f);
			glVertex3f(fraction*1.0f,-1.0f,0.0f);
			glVertex3f(fraction*0.9797f,-1.0f,fraction*-0.2f);
			glVertex3f(0.9797f,1.0f,-0.2f);
		glEnd();
		glRotatef(90.0f,0.0f,1.0f,0.0f);
			glBegin(GL_QUADS);

				{		
				GLfloat v1[]= {0.2f * (fraction -1),-2.0f,-0.9797f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.203f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}

			glVertex3f(0.2f ,1.0f,-0.9797f);
			glVertex3f(fraction*0.2f,-1.0f,fraction*-0.9797f);
			glVertex3f(0.0f,-1.0f,fraction*-1.0f);
			glVertex3f(0.0f,1.0f,-1.0f);

			{		
				GLfloat v1[]= {0.4f * (fraction -1),-2.0f,-0.9165f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.0632f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.4f,1.0f,-0.9165f);
			glVertex3f(fraction*0.4f,-1.0f,fraction*-0.9165f);
			glVertex3f(fraction*0.2f,-1.0f,fraction*-0.9797f);
			glVertex3f(0.2f,1.0f,-0.9797f);

			{		
				GLfloat v1[]= {0.6f * (fraction -1),-2.0f,-0.8f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.1165f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.6f,1.0f,-0.8f);
			glVertex3f(fraction*0.6f,-1.0f,fraction*-0.8f);
			glVertex3f(fraction*0.4f,-1.0f,fraction*-0.9165f);
			glVertex3f(0.4f,1.0f,-0.9165f);
	

			{		
				GLfloat v1[]= {0.8f * (fraction -1),-2.0f,-0.6f * (fraction - 1)};
				GLfloat v2[] = {-0.2f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.8f,1.0f,-0.6f);
			glVertex3f(fraction*0.8f,-1.0f,fraction*-0.6f);
			glVertex3f(fraction*0.6f,-1.0f,fraction*-0.8f);
			glVertex3f(0.6f,1.0f,-0.8f);

			{		
				GLfloat v1[]= {0.9165f * (fraction -1),-2.0f,-0.4f * (fraction - 1)};
				GLfloat v2[] = {-0.1165f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.9165f,1.0f,-0.4f);
			glVertex3f(fraction*0.9165f,-1.0f,fraction*-0.4f);
			glVertex3f(fraction*0.8f,-1.0f,fraction*-0.6f);
			glVertex3f(0.8f,1.0f,-0.6f);

			{		
				GLfloat v1[]= {0.9797f * (fraction -1),-2.0f,-0.2f * (fraction - 1)};
				GLfloat v2[] = {-0.0632f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(0.9797f,1.0f,-0.2f);
			glVertex3f(fraction*0.9797f,-1.0f,fraction*-0.2f);
			glVertex3f(fraction*0.9165f,-1.0f,fraction*-0.4f);
			glVertex3f(0.9165f,1.0f,-0.4f);

			{		
				GLfloat v1[]= {1.0f * (fraction -1),-2.0f,-0.0f * (fraction - 1)};
				GLfloat v2[] = {-0.203f,0.0f,-0.2f};
				NORMAL norm = calcNormal(v1,v2);
				glNormal3f(norm.X,norm.Y,norm.Z);
			}
	
			glVertex3f(1.0f,1.0f,0.0f);
			glVertex3f(fraction*1.0f,-1.0f,0.0f);
			glVertex3f(fraction*0.9797f,-1.0f,fraction*-0.2f);
			glVertex3f(0.9797f,1.0f,-0.2f);

		glEnd();
		
		if(mode == 1)
		{
		glPushMatrix();
			glPushMatrix();
			//draw the circle on top 
				glTranslatef(0.0f,1.0f,0.0f);
				drawCircle();
			glPopMatrix();
			glPushMatrix();
				// draw the circle on bottom
				glScalef(1.0f,-1.0f,1.0f);
				glTranslatef(0.0f,1.0f,0.0f);
				glScalef(fraction,fraction,fraction);
				drawCircle();
			glPopMatrix();
		glPopMatrix();
		}


	glPopMatrix();
}
void Draw::drawCircle()
{
	glPushMatrix();

	glBegin(GL_TRIANGLE_FAN);
	glNormal3f(0.0f,1.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);

	glVertex3f(0.0f,0.0f,-1.0f);
	glVertex3f(0.2f,0.0f,-0.9797f);


	glVertex3f(0.4f,0.0f,-0.9165f);
	glVertex3f(0.6f,0.0f,-0.8f);


	glVertex3f(0.8f,0.0f,-0.6f);
	glVertex3f(0.9165f,0.0f,-0.4f);


	glVertex3f(0.9797f,0.0f,-0.2f);
	glVertex3f(1.0f,0.0f,0.0f);

	glEnd();

	glRotatef(90.0f,0.0f,1.0f,0.0f);
	
	glBegin(GL_TRIANGLE_FAN);
	glNormal3f(0.0f,1.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);

	glVertex3f(0.0f,0.0f,-1.0f);
	glVertex3f(0.2f,0.0f,-0.9797f);


	glVertex3f(0.4f,0.0f,-0.9165f);
	glVertex3f(0.6f,0.0f,-0.8f);


	glVertex3f(0.8f,0.0f,-0.6f);
	glVertex3f(0.9165f,0.0f,-0.4f);


	glVertex3f(0.9797f,0.0f,-0.2f);
	glVertex3f(1.0f,0.0f,0.0f);

	glEnd();
	glRotatef(90.0f,0.0f,1.0f,0.0f);
	
	glBegin(GL_TRIANGLE_FAN);
	glNormal3f(0.0f,1.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);

	glVertex3f(0.0f,0.0f,-1.0f);
	glVertex3f(0.2f,0.0f,-0.9797f);


	glVertex3f(0.4f,0.0f,-0.9165f);
	glVertex3f(0.6f,0.0f,-0.8f);


	glVertex3f(0.8f,0.0f,-0.6f);
	glVertex3f(0.9165f,0.0f,-0.4f);


	glVertex3f(0.9797f,0.0f,-0.2f);
	glVertex3f(1.0f,0.0f,0.0f);

	glEnd();
	glRotatef(90.0f,0.0f,1.0f,0.0f);
	
	glBegin(GL_TRIANGLE_FAN);
	glNormal3f(0.0f,1.0f,0.0f);
	glVertex3f(0.0f,0.0f,0.0f);

	glVertex3f(0.0f,0.0f,-1.0f);
	glVertex3f(0.2f,0.0f,-0.9797f);


	glVertex3f(0.4f,0.0f,-0.9165f);
	glVertex3f(0.6f,0.0f,-0.8f);


	glVertex3f(0.8f,0.0f,-0.6f);
	glVertex3f(0.9165f,0.0f,-0.4f);


	glVertex3f(0.9797f,0.0f,-0.2f);
	glVertex3f(1.0f,0.0f,0.0f);

	glEnd();
	glPopMatrix();
}
void Draw::drawBezier (int which)
{
	loadBezier(which);

	glPushMatrix();
	  glEvalMesh2(GL_FILL, 0, 20, 0, 20);

	glPopMatrix();
}
void Draw::drawPolygon3D()
{
	glPushMatrix();
	glBegin(GL_POLYGON);
		glNormal3f(0.0f,1.0f,0.0f);
		glVertex3f(0.0f,1.0f,1.0f);
		glVertex3f(0.7f,1.0f,0.7f);
		glVertex3f(1.0f,1.0f,0.0f);
		glVertex3f(0.7f,1.0f,-0.7f);
		glVertex3f(0.0f,1.0f,-1.0f);
		glVertex3f(-0.7f,1.0f,-0.7f);
		glVertex3f(-1.0f,1.0f,0.0f);
		glVertex3f(-0.7f,1.0f,0.7f);

	glEnd();
	
	glBegin(GL_QUADS);
		
		glNormal3f(normals[7].X,normals[7].Y ,normals[7].Z );
		
		glVertex3f(0.0f,1.0f,1.0f);
		glVertex3f(0.0f,0.0f,1.0f);
		glVertex3f(0.7f,0.0f,0.7f);
		glVertex3f(0.7f,1.0f,0.7f);

		glNormal3f(normals[8].X,normals[8].Y ,normals[8].Z );

		glVertex3f(0.7f,1.0f,0.7f);
		glVertex3f(0.7f,0.0f,0.7f);
		glVertex3f(1.0f,0.0f,0.0f);
		glVertex3f(1.0f,1.0f,0.0f);
		
		glNormal3f(normals[9].X,normals[9].Y ,normals[9].Z );
		
		glVertex3f(1.0f,1.0f,0.0f);
		glVertex3f(1.0f,0.0f,0.0f);
		glVertex3f(0.7f,0.0f,-0.7f);
		glVertex3f(0.7f,1.0f,-0.7f);
		

		glNormal3f(normals[10].X,normals[10].Y ,normals[10].Z );
	
		glVertex3f(0.7f,1.0f,-0.7f);
		glVertex3f(0.7f,0.0f,-0.7f);
		glVertex3f(0.0f,0.0f,-1.0f);
		glVertex3f(0.0f,1.0f,-1.0f);

		glNormal3f(normals[11].X,normals[11].Y ,normals[11].Z );
		
		glVertex3f(0.0f,1.0f,-1.0f);
		glVertex3f(0.0f,0.0f,-1.0f);
		glVertex3f(-0.7f,0.0f,-0.7f);
		glVertex3f(-0.7f,1.0f,-0.7f);

		glNormal3f(normals[12].X,normals[12].Y ,normals[12].Z );
		glVertex3f(-0.7f,1.0f,-0.7f);
		glVertex3f(-0.7f,0.0f,-0.7f);
		glVertex3f(-1.0f,0.0f,0.0f);
		glVertex3f(-1.0f,1.0f,0.0f);

		glNormal3f(normals[13].X,normals[13].Y ,normals[13].Z );
		
		glVertex3f(-1.0f,1.0f,0.0f);
		glVertex3f(-1.0f,0.0f,0.0f);
		glVertex3f(-0.7f,0.0f,0.7f);
		glVertex3f(-0.7f,1.0f,0.7f);
		
		
		glNormal3f(normals[14].X,normals[14].Y ,normals[14].Z );
		
		glVertex3f(-0.7f,1.0f,0.7f);
		glVertex3f(-0.7f,0.0f,0.7f);
		glVertex3f(0.0f,0.0f,1.0f);
		glVertex3f(0.0f,1.0f,1.0f);
		
		
	glEnd();
	
	glBegin(GL_POLYGON);
		glNormal3f(0.0f,-1.0f,0.0f);
		glVertex3f(0.0f,0.0f,1.0f);
		glVertex3f(0.7f,0.0f,0.7f);
		glVertex3f(1.0f,0.0f,0.0f);
		glVertex3f(0.7f,0.0f,-0.7f);
		glVertex3f(0.0f,0.0f,-1.0f);
		glVertex3f(-0.7f,0.0f,-0.7f);
		glVertex3f(-1.0f,0.0f,0.0f);
		glVertex3f(-0.7f,0.0f,0.7f);

	glEnd();
	glPopMatrix();
}
void Draw::drawSphere (double R,int textureID)
{
	

	int b;
	glPushMatrix();
	glScalef (0.0125 * R, 0.0125 * R, 0.0125 * R);
	glRotatef (-90, 1, 0, 0);
	glColor3f(1.0f,1.0f,1.0f);
	glEnable(GL_TEXTURE_2D);
	// singleton instance of texture class
	MyTexture* texture = MyTexture::getInstance();
	texture->selectTexture(textureID);


	glBegin (GL_TRIANGLE_STRIP);
	int count = 0;
		for ( b = 0; b <= VertexCount; b++)
		{
			
			glTexCoord2f (VERTEX[b].U, VERTEX[b].V);
			glVertex3f (VERTEX[b].X, VERTEX[b].Y, -VERTEX[b].Z);
		}

		for ( b = 0; b <= VertexCount; b++)
		{
			
			glTexCoord2f (VERTEX[b].U, -VERTEX[b].V);
			glVertex3f (VERTEX[b].X, VERTEX[b].Y, VERTEX[b].Z);
		}

	glEnd();
	glPopMatrix();
}





void Draw::loadBezier(int which)
{
	switch(which)
	{
	case 1: loadSatelliteDish();
 

	}
	glEnable(GL_MAP2_VERTEX_3);
    glEnable(GL_AUTO_NORMAL);
    glEnable(GL_NORMALIZE);
    glMapGrid2f(20, 0.0, 1.0, 20, 0.0, 1.0);
	//glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, uSize, 0, 1, uSize * 3, vSize, ctrlPoints);

}
void Draw::loadSatelliteDish()
{
	
	GLfloat _ctrlpoints[4][4][3] =
	{
	  {
		{-1.3f, -1.3f, 0.0f},
		{-0.5f, -2.0f, 0.0f},
		{0.5f, -2.0f, 0.0f},
		{1.3f, -1.3f, 0.0f}},
	  {
		{-2.0f, -0.5f, 0.0f},
		{-0.5f, -0.5f, -1.5f},
		{0.5f, -0.5f, -1.5f},
		{2.0f, -0.5f, 0.0f}},
	  {
		{-2.0f, 0.5f, 0.0f},
		{-0.5f, 0.5f, -1.5f},
		{0.5f, 0.5f, -1.5f},
		{2.0f, 0.5f, 0.0f}},
	  {
		{-1.3f, 1.3f, 0.0f},
		{-0.5f, 2.0f, 0.0f},
		{0.5f, 2.0f, 0.0f},
		{1.3f, 1.3f, 0.0f}}
	};
ctrlPoints = &_ctrlpoints[0][0][0];
uSize = 4;
vSize = 4;
glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, uSize, 0, 1, uSize * 3, vSize,  &_ctrlpoints[0][0][0]);
}
void Draw::loadSphere (double R, double H, double K, double Z) 
{
	int n;
	double a;
	double b;
	n = 0;
	for( b = 0; b <= 90 - space; b+=space){
		for( a = 0; a <= 360 - space; a+=space){



	VERTEX[n].X = R * sin((a) / 180 * PI) * sin((b) / 180 * PI) - H;

	VERTEX[n].Y = R * cos((a) / 180 * PI) * sin((b) / 180 * PI) + K;

	VERTEX[n].Z = R * cos((b) / 180 * PI) - Z;

	double normalSize = VERTEX[n].X * VERTEX[n].X +
						VERTEX[n].Y * VERTEX[n].Y +
						VERTEX[n].Z * VERTEX[n].Z ;
	normalSize = sqrt(normalSize);
	NORM[n].X = VERTEX[n].X / normalSize;
	NORM[n].Y = VERTEX[n].Y / normalSize;
	NORM[n].Z = VERTEX[n].Z / normalSize;

	VERTEX[n].V = (2 * b) / 360.0;

	VERTEX[n].U = (a) / 360.0;

	n++;



	VERTEX[n].X = R * sin((a) / 180 * PI) * sin((b + space) / 180 * PI

	) - H;

	VERTEX[n].Y = R * cos((a) / 180 * PI) * sin((b + space) / 180 * PI

	) + K;

	VERTEX[n].Z = R * cos((b + space) / 180 * PI) - Z;

	VERTEX[n].V = (2 * (b + space)) / 360;

	VERTEX[n].U = (a) / 360;

	n++;



	VERTEX[n].X = R * sin((a + space) / 180 * PI) * sin((b) / 180 * PI

	) - H;

	VERTEX[n].Y = R * cos((a + space) / 180 * PI) * sin((b) / 180 * PI

	) + K;

	VERTEX[n].Z = R * cos((b) / 180 * PI) - Z;

	VERTEX[n].V = (2 * b) / 360;

	VERTEX[n].U = (a + space) / 360;

	n++;



	VERTEX[n].X = R * sin((a + space) / 180 * PI) * sin((b + space) /

	180 * PI) - H;

	VERTEX[n].Y = R * cos((a + space) / 180 * PI) * sin((b + space) /

	180 * PI) + K;

	VERTEX[n].Z = R * cos((b + space) / 180 * PI) - Z;

	VERTEX[n].V = (2 * (b + space)) / 360;

	VERTEX[n].U = (a + space) / 360;

	n++;



    }

}
}


NORMAL Draw::calcNormal(GLfloat v1[3],GLfloat v2[3])
{
	
	NORMAL normal;
	normal.X = v1[1] * v2[2] - v1[2] * v2[1];
	normal.Y = -v1[0] * v2[2] + v2[0] * v1[2];
	normal.Z = v1[0] * v2[1] - v2[0] * v1[1];
	GLfloat length =	normal.X *  normal.X+
		normal.Y * normal.Y+
		normal.Z * normal.Z;
	length = sqrt(length);
	normal.X	= normal.X /length;
	normal.Y	= normal.Y /length;
	normal.Z	= normal.Z /length;

	return normal;
}
