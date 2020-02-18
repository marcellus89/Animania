#include "myGfxShapesLib.h"
#include <math.h>
#include "gfx2.h"

const double PI = 3.1415927;

void drawSquare(double xCenter, double yCenter, double side)
{	
	// calculate x,y coordinates of corners	
	double ulx = xCenter - side/2; 
	double uly = yCenter - side/2;
	double llx = xCenter - side/2;
	double lly = yCenter + side/2;
	double urx = xCenter + side/2;
	double ury = yCenter - side/2;
	double lrx = xCenter + side/2;
	double lry = yCenter + side/2;


	gfx_line(ulx,uly,llx,lly);
	gfx_line(llx,lly,lrx,lly);
	gfx_line(lrx,lry,urx,ury);
	gfx_line(urx,ury,ulx,uly);
	
}

void drawCircle(double xCenter, double yCenter, double radius)
{
    double x,y,xNext,yNext,theta,thetaNext;
    double thetaIncrement = 2.0 / ( 2 * PI * radius); 
    for( theta = 0; theta < 2*PI; theta = theta + thetaIncrement )
    {
        thetaNext = theta + thetaIncrement;
        x = xCenter + radius * cos(theta);
        y = yCenter + radius * sin(theta);
        xNext = xCenter + radius * cos(thetaNext);
        yNext = yCenter + radius * sin(thetaNext);
        gfx_line(x,y,xNext,yNext);
       }
}

void drawPoly(double xCenter, double yCenter, double radius, double sides)
{
    double x,y,xNext,yNext,theta,thetaNext;
    double thetaIncrement = (2 * PI) / sides; 
    for( theta = 0; theta < 2*PI; theta = theta + thetaIncrement)
    {
        thetaNext = theta + thetaIncrement;
        x = xCenter + radius * cos(theta);
        y = yCenter + radius * sin(theta);
        xNext = xCenter + radius * cos(thetaNext);
        yNext = yCenter + radius * sin(thetaNext);
        gfx_line(x,y,xNext,yNext);
       }
}
