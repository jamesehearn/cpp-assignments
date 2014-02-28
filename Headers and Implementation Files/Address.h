/******************************************************************************************************************
Program: Assignment 1
Programmer: James E. Hearn
Description: This is the Address header file for Assignment 1 program, compiled with the Employee.cpp file.
			This header contains a default contructor, a getCity function, a getState function, 
			a getStreet function, a getZip function, a print function, and four private string instance variables 
			for Street, City, State and Zip.
******************************************************************************************************************/
#ifndef ADDRESS_H_
#define ADDRESS_H_

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/** The class Address represents a physical mailing address. */
class Address 
{
	public;
	
	//Constructors
	/** Default contructor that takes no arguments. */
	void Address();
	{
	street = "99999 Sunset Boulevard";
	city = "Beverly Hills";
	state = "CA";
	zip = "99999";
	}

	/** Default contructor for the address. */
	void Address(string str, string ci, string st, string zi);
	{
	street = str;
	city = ci;
	state = st;
	zip = zi;
	}

	//Accessors
	/** Returns street address. */
	string getStreet() const;
	{
	return street;
	}

	/** Returns city. */
	string getCity() const;
	{
	return city;
	}
	
	/** Returns state. */
	string getState() const;
	{
	return state;
	}

	/** Returns zip code. */
	string getZip() const;
	{
	return zip;
	}
		
	//Printer function
	/** Prints full address. */
	void printAddy() const;
	{
	cout <<	street << " " << city << " " << state << " " << zip << endl;
	}
	
private:
    // The implementation details are defined here
/** The street name. */
string street;

/** The city name. */
string city;

/** The state name. */
string state;

/** The zip code. */
string zip;
};
#ENDIF