/*****************************************************************************************************
Program: Assignment 3
Date: 6/28/2013
Name: James E. Hearn
Description: This is the Point header file. This is to be included with FigureGeometry.h, 
			Circle.h, Square.h, and Rectangle.h.
*****************************************************************************************************/
#ifndef POINT_H_
#define POINT_H_

//#include "FigureGeometry.h"
//#include <string>
//#include <algorithm>

/** Declaration of the abstract class Point. */ 
class Point 
{
public:
	/**Constructors for Point object.
	@param theWidth The width of the figure
	@param theHeight The Height of the figure
	*/
	Point() : width(0), height(0) {}

	Point( int theWidth, int theHeight ) : width(theWidth), height(theHeight) {}

	/**Accessors for the Point object. */
	int getWidth() const { return width; }

	int getHeight() const { return height; }

	/**Mutators for the Point object. */
	void setWidth (int theWidth) { width = theWidth; }

	void setHeight (int theHeight) { height = theHeight; }

private:
	//Variables
	int width;
	int height;
};
#endif