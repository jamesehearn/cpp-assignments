/******************************************************************************************************************
Program: Assignment 1
Programmer: James E. Hearn
Date: 6/20/2013
Description: This is the Employee.cpp implementation file for Assignent 1.
******************************************************************************************************************/
#include "Enmployee.h"
#include <ostream>
using std::ostream;
using std::endl;

int main()
{
Name n;
Address a;
Employee e;

Name n1 = "George Victor Meghabghab";
Address a1 = "your own address";
string ssn1 = "987-65-4321";

cout << "Name:" << endl;
cout << getFirstlast() << endl;

cout << "Address" << endl;
cout << getStreet() << " " << getCity() << " " << getState << " " << getZip << endl;

cout << getSSN() << endl;

cout <<"Employee:" << endl;
cout << Employee() << endl;


cout << "Employee e1: << endl;
cout << Employee(Name(n1), Address(a1), ssn1) << endl;

}