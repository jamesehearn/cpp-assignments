/******************************************************************************************************************
Program: Assignment 1
Programmer: James E. Hearn
Date: 6/20/2013
Description: This is the Name header file for Assignment 1 program, compiled with the Employee.cpp file.
			This header contains a default constructor, a getFirstlast function, a print function, and
			three private string variables for first name, middle name, and last name.
******************************************************************************************************************/
#ifndef NAME_H_
#define NAME_H_
#include <string>	//
#include <iosfwd>	//

/** Name is a class that represents a human being. */
class Name {
public:
  
	// Constructors
	/** Construct a name with given values.
      @param first The given name
	  @param middle The middle name
      @param family The family name
	*/
	Name(std::string first, std::string middle, std::string family):
    given_name(first), middle_name(middle), family_name(family) {}
  
	/** Construct a default name. */
	Name() : given_name("John"), middle_name("H."), family_name("Doe") {}
	
	// Accessor Function
	/** Returns the individual's firt, middle, & last name.
      @return the given, millde, and family name as a string
	*/
	std::string getFirstLast() const { return given_name + " " + middle_name + " " + family_name; }

	//Print Function
  /** Declaration of the stream insertion operator for Name.
      @param os The target ostream
      @param nam The Name object being output
      @return The updated output stream
  */
  friend std::ostream& operator<<(std::ostream& os, const Name& nam);

 private:
  // String Variables
  /** The first name. */
  std::string given_name;

  /** The middle name. */
  std::string middle_name;

  /** The last name. */
  std::string family_name;
};
  
#endif