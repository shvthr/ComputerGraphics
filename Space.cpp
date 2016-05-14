#include "Space.h"

void Space::draw(int SatelliteOnly,int viewMode)
{
	
	if(SatelliteOnly == 0)
	{
		glPushMatrix();
			glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			skyBox.draw();	
			if(viewMode == 1) 
				glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		glPopMatrix();
		glPushMatrix();
			glScalef(25.0f,25.0f,25.0f);
			animateEarth();
			drawEarth();
		glPopMatrix();
			
		glPushMatrix();
			glScalef(0.5f,0.5f,0.5f);
			
			glPushMatrix();
				mySatellite.animateSatellite(elapseTime);
				glRotatef(30.0f,1.0f,0.0f,0.0f);
				mySatellite.drawParts();
			glPopMatrix();
		glPopMatrix();
	}
	else
	{
		glPushMatrix();
			glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			skyBox.draw();	
			if(viewMode == 1) 
				glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		glPopMatrix();
		glPushMatrix();
			mySatellite.drawParts();
		glPopMatrix();
	}

	
	
}
void Space::drawEarth()
{
	glPushMatrix();
	myDrawer.drawSphere(5,0);
	glPopMatrix();
}
void Space::init()
{
	myDrawer.loadBezier(1);
	myDrawer.loadSphere(70,0,0,0);
	myDrawer.initNormals();
	earthRotationSpeed = 0.05f;
	timenew = timeold = elapseTime = 0;
	mySatellite.init(myDrawer);
}

 void Space::tickTime()
    {
     timenew    = glutGet(GLUT_ELAPSED_TIME);
     elapseTime = timenew - timeold;
     timeold    = timenew;
    }

 void Space::animateEarth()
 {
	
	
	static double spin ;
	spin += earthRotationSpeed * elapseTime;
	glRotatef(spin,0.0f,1.0f,0.0f);
	
 }