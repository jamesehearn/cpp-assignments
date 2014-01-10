/*
*Program: PEX5.cpp (Assignment 5)
*Date: July 15, 2013
*Programmer: James E. Hearn
*Description: This program asks the user for a sequence of twenty integers, reads each integer in the list,
*				and pushes each integer into a stack or odd number or a stack of even numbers. This program
*				then displays the contents of each stack by popping each one off individually.
*/

#include <stack>
#include <iostream>

int main() {

	int numbers[20];
	int numbersIndex = 0;
	
	//Ask user for 20 integers
	std::cout << "Enter twenty integers, each separated by a space:" << std::endl;
	
	std::cin >> numbers[0];
	while(std::cin){
		numbersIndex++;
		std::cin >> numbers[numbersIndex];
	}

	if (numbersIndex != 20)
		std::cout << "You did not enter";

	for (int count = 0; count < numbersIndex; count++)
		std::cout << numbers[numbersIndex] << std::endl;

	//Store integers in an array

	//Push each int to odd or even stack

	//Output contents of each stack & pop until empty

	return 0;
}
