#include "Satellite.h"




void Satellite::init(Draw _myDrawer)
{
		myDrawer = _myDrawer;
		satelliteBackParts.init(_myDrawer);
		satelliteMiddleParts.init(_myDrawer);
		satelliteRotationSpeed = 0.01;
		
}

void Satellite::drawParts()
{
	glPushMatrix();
	glColor3f(0.7f,0.7f,0.7f);
	glTranslatef(0.0f,0.0f,85.0f);
	glScalef(0.5f,0.5f,0.5f);
	
	renderBackParts();
	renderMiddleParts();
	glPopMatrix();

	
	

}

void Satellite::renderBackParts()
{
	glPushMatrix();
		glPushMatrix();
			glTranslatef(0.0f,0.0f,102.4f);
			satelliteBackParts.backCompartment();
			satelliteBackParts.fuelExhausts();
		glPopMatrix();

		glPushMatrix();
			glColor3f(0.7f,0.7f,0.7f);
			satelliteMiddleParts.draw();
		glPopMatrix();
		
		glRotatef(45.0f,0.0f,1.0f,0.0f);
		glTranslatef(120.0f,0.0f,50.0f);
		glPushMatrix();
			glTranslatef(0.0f,0.0f,102.4f);
			satelliteBackParts.backCompartment();
			satelliteBackParts.fuelExhausts();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f,0.0f,0.0f);
			glColor3f(0.7f,0.7f,0.7f);
			satelliteMiddleParts.draw();
		glPopMatrix();
		glRotatef(45.0f,0.0f,1.0f,0.0f);
		glTranslatef(120.0f,0.0f,50.0f);
		glPushMatrix();
			glTranslatef(0.0f,0.0f,102.4f);
			satelliteBackParts.backCompartment();
			satelliteBackParts.fuelExhausts();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f,0.0f,0.0f);
			glColor3f(0.7f,0.7f,0.7f);
			satelliteMiddleParts.draw();
		glPopMatrix();
		glRotatef(45.0f,0.0f,1.0f,0.0f);
		glTranslatef(120.0f,0.0f,50.0f);
		glPushMatrix();
			glTranslatef(0.0f,0.0f,102.4f);
			satelliteBackParts.backCompartment();
			satelliteBackParts.fuelExhausts();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f,0.0f,0.0f);
			glColor3f(0.7f,0.7f,0.7f);
			satelliteMiddleParts.draw();
		glPopMatrix();
		glRotatef(45.0f,0.0f,1.0f,0.0f);
		glTranslatef(120.0f,0.0f,50.0f);
		glPushMatrix();
			glTranslatef(0.0f,0.0f,102.4f);
			satelliteBackParts.backCompartment();
			satelliteBackParts.fuelExhausts();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f,0.0f,0.0f);
			glColor3f(0.7f,0.7f,0.7f);
			satelliteMiddleParts.draw();
		glPopMatrix();
		glRotatef(45.0f,0.0f,1.0f,0.0f);
		glTranslatef(120.0f,0.0f,50.0f);
		glPushMatrix();
			glTranslatef(0.0f,0.0f,102.4f);
			satelliteBackParts.backCompartment();
			satelliteBackParts.fuelExhausts();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f,0.0f,0.0f);
			glColor3f(0.7f,0.7f,0.7f);
			satelliteMiddleParts.draw();
		glPopMatrix();
		glRotatef(45.0f,0.0f,1.0f,0.0f);
		glTranslatef(120.0f,0.0f,50.0f);
		glPushMatrix();
			glTranslatef(0.0f,0.0f,102.4f);
			satelliteBackParts.backCompartment();
			satelliteBackParts.fuelExhausts();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f,0.0f,0.0f);
			glColor3f(0.7f,0.7f,0.7f);
			satelliteMiddleParts.draw();
		glPopMatrix();
		glRotatef(45.0f,0.0f,1.0f,0.0f);
		glTranslatef(120.0f,0.0f,50.0f);
		glPushMatrix();
			glTranslatef(0.0f,0.0f,102.4f);
			satelliteBackParts.backCompartment();
			satelliteBackParts.fuelExhausts();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0f,0.0f,0.0f);
			glColor3f(0.7f,0.7f,0.7f);
			satelliteMiddleParts.draw();
		glPopMatrix();
	
	glPopMatrix();
	
}

void Satellite::renderMiddleParts()
{
	
	glPushMatrix();
		glTranslatef(0.0f,-25.0f,-166.0f);
		glScalef(50.0f,50.0f,50.0f);
		glRotatef(22.5f,0.0f,1.0f,0.0f);
		myDrawer.drawPolygon3D();
		glTranslatef(0.0f,1.0f,0.0f);
		myDrawer.drawSphere(1,1);
		glPushMatrix();
			glTranslatef(0.0f,1.4f,0.0f);
			glPushMatrix();
				glScalef(0.05f,0.6f,0.05f);
				myDrawer.drawSkewedCylinder(1,4);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.0f,0.9f,0.35f);
				glScalef(0.5f,0.5f,0.5f);
				glRotatef(-30.0f,1.0f,0.0f,0.0f);
				dishOnTop();
			

			glPopMatrix();
		glPopMatrix();
	glPopMatrix();

}
void Satellite::dishOnTop()
{
	glPushMatrix();
		
		myDrawer.drawBezier(1);
		glPushMatrix();
			glRotatef(90.0f,1.0f,0.0f,0.0f);
			glScalef(0.05f,1.0f,0.05f);
			myDrawer.drawCylinder(1);
			glColor3f(1.0f,0.0f,0.0f);
			glPushMatrix();
				glScalef(2.0f,0.1f,2.0f);
				glTranslatef(0.0f,10.0f,0.0f);
				myDrawer.drawSphere(1,10);
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();
}

BackParts Satellite:: getBackParts()
{
	return satelliteBackParts;
}

MiddleParts Satellite::getMiddleParts()
{
	return satelliteMiddleParts;
}

void Satellite::animateSatellite(long elapseTime)
{
	
	static double spin ;
	spin += satelliteRotationSpeed * elapseTime;
	glRotatef(spin,0.0f,1.0f,0.0f);
	glTranslatef(0.0f,500.0f,-300.0f);
}