/******************************************************************************************************************
Program: Assignment 1
Programmer: James E. Hearn
Date: 6/20/2013
Description: This is the Employee.cpp implementation file for Assignent 1.
******************************************************************************************************************/
#include "Employee.h"
#include <iostream>

using namespace std;

int main()
{
Name n;
Address a;
Employee e;

Name n1("George", "Vincient", "Meghanghab");
Address a1("420 Elysian Fields Rd, D-1", "Nashville", "TN", "37211");
string ssn1 = "987-65-4321";

cout << "Name:" << endl;
cout << n.getFirstLast() << endl;

cout << "Address:" << endl;
cout << a.getStreet() << ", " << a.getCity() << ", " << a.getState() << ", " << a.getZip() << endl;

cout <<"Employee:" << endl;
cout << e.getName() << endl;
//cout << e.getAddress() <<endl;
cout << e.getSSN() << endl;

cout << "Employee e1:" << endl;
//cout << Employee(Name(n1), Address(a1), ssn1) << endl;

return 0;
}