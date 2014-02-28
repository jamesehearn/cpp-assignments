/*****************************************************************************************************
Program: Figure Geometry
Name: James E. Hearn
Description: This is the Square header file. This is to be included with Circle.h, 
			Point.h, Rectangle.h, and FigureGeometry.h.
*****************************************************************************************************/

#ifndef SQUARE_H_
#define SQUARE_H_

#include "FigureGeometry.h"
#include "Point.h"

class Square : public FigureGeometry 
{
public:
	/**Constructor for Square object.
		@param p1 The width & height of the square
	*/
	Square(Point p1) : point(p1) {}

	/**Accessors for the Square object. */
	int getSideLength() const { return point.getWidth(); }

	virtual float getArea() const { return getSideLength() * getSideLength(); }

	virtual float getPerimeter() const { return getSideLength() * 4; }

	/**Mutator for the Square object. */
	void setPoint(Point p1) { point = p1; }

private: 
	/**Variable Declaration */
	Point point;
};

#endif