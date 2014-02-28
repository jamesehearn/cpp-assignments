/*****************************************************************************************************
Program: Figure Geometry
Name: James E. Hearn
Description: This is the TestAll.cpp file. This is to be included with Circle.h, 
			Point.h, Square.h, Rectangle.h, and FigureGeometry.h.
*****************************************************************************************************/
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>

using std::cout;
using std::endl;

/**Tests classes Circle, Point, Square, Rectangle, & FigureGeometry. */

int main()
{
	/**Variable instance creation */
	Circle c1(5);
	Square s1(Point(5, 5));
	Rectangle r1(Point(5, 7));

	/**Display the details of the c1 Circle onject. */
	cout << "Details of c1:" << endl;
	cout << "radius: " << c1.getRadius() << endl;
	cout << "area: " << c1.getArea() << endl;
	cout << "perimeter: " << c1.getPerimeter() << endl;
	cout << endl;

	/**Display the details of the s1 Square onject. */
	cout << "Details of s1:" << endl;
	cout << "side length: " << s1.getSideLength() << endl;
	cout << "area: " << s1.getArea() << endl;
	cout << "perimeter: " << s1.getPerimeter() << endl;
	cout << endl;
	
	/**Display the details of the r1 Rectangle onject. */
	cout << "Details of r1:" << endl;
	cout << "width: " << r1.getWidth() << endl;
	cout << "height: " << r1.getHeight() << endl;
	cout << "area: " << r1.getArea() << endl;
	cout << "perimeter: " <<r1.getPerimeter() << endl;
	cout << endl;
	
	/**Exit program routine */
	return 0;
}