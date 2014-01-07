/******************************************************************************************************************
Program: Assignment 1
Programmer: James E. Hearn
Date: 6/20/2013
Description: This is the Employee header file for Assignment 1 program, compiled with the Employee.cpp file.
			This header contains a defualt contructor, a constructor with three parameters, a getName function,
			a getAddress function, a getSSn function, a print function, and three private instance 
			variables: Name, Address, and SSN.
******************************************************************************************************************/
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Name.h" 		// Definition of the Name class
#include "Address.h"  	// Definition of the Address class
#include <iostream>  	// Declaration of I/O classes

/** Employee is a class that represents an employee. */
class Employee { 
public:

 // Constructors
  /** Constructs an employee with given values.
      @param name The name of the employee
      @param address The address of the employee
      @param ssn The social security number of the employee
  */

   Employee(Name::Name name, Address::Address address, std::string ssn) :
   employee_name(name), employee_address(address), employee_ssn(ssn) {}
  
  /** Constructs a default employee. */
  Employee() : employee_name("John, H., Doe"), employee_address("99999 Sunset Boulevard", "Beverly Hills", "CA", "99999"), employee_ssn("999-99-9999") {}

	// Accessor Functions
	/** Returns the employee's name.
      @return the employee's name as a string
	*/
	Name::Name getName() const { return employee_name; }

  	/** Returns the employee's address.
      @return the employee's address as a string
	*/
	Address:Address getAddress() const { return employee_address; }

	/** Returns the employee's social security number.
      @return the social security number as a string
	*/
	std::string getSSN() const { return ssn; }
	
	//Print Function
  /** Declaration of the stream insertion operator for Employee.
      @param os The target ostream
      @param nam The Name object being output
      @return The updated output stream
  */
  friend std::ostream& operator<<(std::ostream& os, const Employee& employee_name, Employee& employee_address, Employee& ssn);

//Instance Variables
 private:
  // Instance Variables
  /** The name from Name.h. */
  Name name;

  /** The address from Address.h. */
  Address address;
  
  //String Variables
  /** The social security number of the employee. */
  string ssn;
  	  
#endif
