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

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/** The class Name represents a person's full name. */
class Name
{
	public;
	
	//Constructors
	/** Default contructor that takes no arguments. */
	void Name();
	{
	firstname = "John"'
	middleName = "H.";
	lastname = "Doe";
	}
	
	/** Default contructor for the full name. */
	void Name(string first, string middle, string last);
	{
	firstName = first;
	middlename = middle;
	lastname = last;
	}
	
	//Accessor
	/** Returns full name. */
	int getFirstLast() const;
	{
	return firstName, middleName, lastName;
	}
	
	//Printer function
	/** Prints full name. */
	sting printName() const;
	{
	cout <<	firstName << " " << middleName << " " << lastName << endl;
	}
	
private:
    // The implementation details are defined here
/** The first name. */
string firstName;

/** The middle name. */
string middleName;

/** The last name. */
string lastName;

};


#endif