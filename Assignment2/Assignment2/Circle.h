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
//#include <string>
//#include <algorithm>

/** Declaration of the abstract class Circle. */ 
class Circle : public FigureGeometry {

public:
    /**Default constructor for a Circle object. */
    Circle() {}

    /**Constructor for a Circle object that passes variables. */
	Circle(float theRadius) : radius(theRadius) {}
    
    /**Dstructor for a Circle object. */
	virtual ~Circle() {}

	/**Accessors for the Circle object. */
	virtual float getRadius() const { return radius; }

	virtual float getArea() const { return getRadius() * getRadius() * PI; };
	
	virtual float getPerimeter() const { return getRadius() * 2 * PI; };

	/**Mutators for the Circle object.*/
	void setRadius(float theRadius) { radius = theRadius; }

private:
	/**Variable Declaration */
	float radius;
};
#endif