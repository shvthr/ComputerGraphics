#include "Skybox.h"
#include "Texture.hpp"

void Skybox::draw()
{
	 // Store the current matrix
    glPushMatrix();
 

	glScalef(size,size,size);
    // Just in case we set all vertices to white.
	glColor3f(1.0f,1.0f,1.0f);
	glEnable(GL_TEXTURE_2D);
    // Render the front quad
	MyTexture::getInstance()->selectTexture(2);
    glBegin(GL_QUADS);
        glTexCoord2f(0, 0); glVertex3f(  0.5f, -0.5f, -0.499999f );
        glTexCoord2f(1, 0); glVertex3f( -0.5f, -0.5f, -0.499999f );
        glTexCoord2f(1, 1); glVertex3f( -0.5f,  0.5f, -0.499999f );
        glTexCoord2f(0, 1); glVertex3f(  0.5f,  0.5f, -0.499999f );
    glEnd();
 
    // Render the left quad
	MyTexture::getInstance()->selectTexture(3);
    glBegin(GL_QUADS);
        glTexCoord2f(0, 0); glVertex3f(  0.5f, -0.5f,  0.5f );
        glTexCoord2f(1, 0); glVertex3f(  0.5f, -0.5f, -0.5f );
        glTexCoord2f(1, 1); glVertex3f(  0.5f,  0.5f, -0.5f );
        glTexCoord2f(0, 1); glVertex3f(  0.5f,  0.5f,  0.5f );
    glEnd();
 
    // Render the back quad
	MyTexture::getInstance()->selectTexture(4);
    glBegin(GL_QUADS);
        glTexCoord2f(0, 0); glVertex3f( -0.5f, -0.5f,  0.5f );
        glTexCoord2f(1, 0); glVertex3f(  0.5f, -0.5f,  0.5f );
        glTexCoord2f(1, 1); glVertex3f(  0.5f,  0.5f,  0.5f );
        glTexCoord2f(0, 1); glVertex3f( -0.5f,  0.5f,  0.5f );
 
    glEnd();
 
    // Render the right quad
	MyTexture::getInstance()->selectTexture(5);
    glBegin(GL_QUADS);
        glTexCoord2f(0, 0); glVertex3f( -0.5f, -0.5f, -0.5f );
        glTexCoord2f(1, 0); glVertex3f( -0.5f, -0.5f,  0.5f );
        glTexCoord2f(1, 1); glVertex3f( -0.5f,  0.5f,  0.5f );
        glTexCoord2f(0, 1); glVertex3f( -0.5f,  0.5f, -0.5f );
    glEnd();
 
    // Render the top quad
	MyTexture::getInstance()->selectTexture(6);
    glBegin(GL_QUADS);
        glTexCoord2f(0, 1); glVertex3f( -0.5f,  0.5f, -0.5f );
        glTexCoord2f(0, 0); glVertex3f( -0.5f,  0.5f,  0.5f );
        glTexCoord2f(1, 0); glVertex3f(  0.5f,  0.5f,  0.5f );
        glTexCoord2f(1, 1); glVertex3f(  0.5f,  0.5f, -0.5f );
    glEnd();
 
    // Render the bottom quad
  	MyTexture::getInstance()->selectTexture(7);
    glBegin(GL_QUADS);
        glTexCoord2f(0, 0);  glVertex3f( -0.5f, -0.5f, -0.5f );
        glTexCoord2f(0, 1);  glVertex3f( -0.5f, -0.5f,  0.5f );
        glTexCoord2f(1, 1);  glVertex3f(  0.5f, -0.5f,  0.5f );
        glTexCoord2f(1, 0);  glVertex3f(  0.5f, -0.5f, -0.5f );
    glEnd();
 glColor3f(1.0f,1.0f,1.0f);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}