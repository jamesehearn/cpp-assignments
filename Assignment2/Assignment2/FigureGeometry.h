/*****************************************************************************************************
Program: Assignment 3
Date: 6/28/2013
Name: James E. Hearn
Description: This is the FigureGeometry header file. This is to be included with Circle.h, 
			Point.h, Square.h, and Rectangle.h.
*****************************************************************************************************/

#ifndef FIGUREGEOMETRY_H_
#define FIGUREGEOMETRY_H_

//#include <string>

/** Declaration of the abstract class FigureGeometry. */ 
class FigureGeometry {
  public:
    /** Constructor for FigureGerometry object. */
    FigureGeometry() {}

	/**Destructor for FigureGeometry object. */
    virtual ~FigureGeometry() {}

	/**Accessors for FigureGeometry object. */
    virtual float getArea() const = 0;

    virtual float getPerimeter() const = 0;

};
    // Constant data field
    static const float PI = 3.14f;
#endif