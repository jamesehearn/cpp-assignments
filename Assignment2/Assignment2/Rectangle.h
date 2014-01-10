/*****************************************************************************************************
Program: Assignment 3
Date: 6/28/2013
Name: James E. Hearn
Description: This is the Rectangle header file. This is to be included with Circle.h, 
			Point.h, Square.h, and FigureGeometry.h.
*****************************************************************************************************/

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "FigureGeometry.h"
#include "Point.h"

class Rectangle : public FigureGeometry
{
public:
	/**Constructor for Rectangle object.
		@param p1 The width & height of the rectangle
	*/
	Rectangle(Point p1) : point(p1) {}

	/**Accessors for the Rectangle object. */
	int getWidth() const { return point.getWidth(); }

	int getHeight() const { return point.getHeight(); }

	virtual float getArea() const { return getWidth() * getHeight(); }

	virtual float getPerimeter() const { return (getWidth() + getHeight()) * 2; }

	/**Mutators for the Rectangle object. */
	void setPoint(Point p1) { point = p1; }

private:
	/**Variable Declaration */
	Point point;
};


#endif