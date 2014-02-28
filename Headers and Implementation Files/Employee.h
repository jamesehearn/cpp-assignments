/******************************************************************************************************************
Program: Assignment 1
Programmer: James E. Hearn
Description: This is the Employee header file for Assignment 1 program, compiled with the Employee.cpp file.
			This header contains a defualt contructor, a constructor with three parameters, a getName function,
			a getAddress function, a getSSn function, a print function, and three private instance 
			variables: Name, Address, and SSN.
******************************************************************************************************************/
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Name.h"
#include "Address.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Employee
{
public:
	//Constructors
	/** Default contructor for the address. */
	void Employee();
	{
	Name employeeName("John", "H.", "Doe");
	Address employeAddress("99999 Sunset Boulevard", "Beverly Hills", "CA", "99999");
	ssn = "999-99-9999";
	}
	
	/** Constructor that passes three parameters. */
	void Employee(string social, Name &name, Address &address)
	{
	ssn = social;
	employeeName = name;
	employeeAddress = addres;
	}
	
	//Accessors
	/** Returns employee's name. */
	string getName() const;
	{
	return Employee.employeeName;
	}
	
	/** Returns employee's address. */
	string getAddress() const;
	{
	return Employee.employeeAddress;
	}
	
	/** Returns employee's social security number. */
	string getSSN() const;
	{
	return ssn;
	}
	
	//Printer function
	/** Prints employee's information. */
	void printEmployee() const;
	{
	cout << "Employee: << endl;
	cout <<	Employee.EmployeeName << endl;
	cout << "Address:" << endl;
	cout << Emplyee.employeeAddress << endl;
	cout << Emplyee.ssn;
	}
	
	private:
    // The implementation details are defined here
	/** The employee's name. */
	Name employeeName;

	/** The employee's address. */
	Address employeeAddress;

	/** The employee's social security number. */
	string ssn;
};
#ENDIF