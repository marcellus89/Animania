/* Robert M Pegues
   Animania
*/

#include <stdio.h>
#include "gfx2.h"
#include "myGfxShapesLib.h"



int main()
{
	int ysize = 800;
	int xsize = 800;

	char c;

	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Animania");

	// Set the current drawing color to green.
	gfx_color(0,200,100);

	// Draw a triangle on the screen.
	gfx_line(100,100,200,100);
	gfx_line(200,100,150,150);
	gfx_line(150,150,100,100);

	
	gfx_color(155,0,0);
	drawSquare(150,150,30);
	drawSquare(150,150,93);
	drawSquare(166,35,170);
	
	
	double a = 1.0;
	for(int p=0;p<65;p++)
	{
	    drawCircle(320,320,a);
	    a = a + 1.0; 
	}
	
	double b = 1.0;
	for(int p=0;p<65;p++)
	{
	    drawCircle(480,320,b);
	    b = b + 1.0; 
	}
	
	
	double i = 1.0;
	for(int p=0;p<100;p++)
	{
	    drawCircle(400,400,i);
	    i = i + 1.0; 
	}
	
	double r = 10.0;
	for(int k=0;k<10;k++)
	{
	    drawCircle(150,60,r);
	    r = r + 10.0; 
	}
	gfx_color(255,255,255);
	drawCircle(150,60,15);
	drawCircle(150,60,27);
	drawCircle(150,60,33);
	drawCircle(150,60,40);
	
	drawPoly(150,650,130,5);
	
	gfx_color(200,200,200);
	drawPoly(650,650,99,12);
	
	

	while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}

	return 0;
}
