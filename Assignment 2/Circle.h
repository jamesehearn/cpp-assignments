/*****************************************************************************************************
Program: Assignment 3
Date: 6/28/2013
Name: James E. Hearn
Description: This is the Circle header file. This is to be included with FigureGeometry.h, 
			Point.h, Square.h, and Rectangle.h.
*****************************************************************************************************/
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "FigureGeometry.h"
#include <string>
#include <algorithm>

/** Declaration of the abstract class Circle. */ 
class Circle : public FigureGeometry {

public:
    // Functions
    Circle() {}

    virtual ~Circle() {}

	float theRadius(float radius) { radius = theRadius;}

	virtual float getRadius() { return radius; }

	virtual float getArea() {return getRadius() * getRadius() * PI;};

	virtual float getPerimeter() {return getRadius() * 2 * PI;};

	void setRadius(float theRadius) { radius = theRadius; }

private:
float radius;
};
#endif