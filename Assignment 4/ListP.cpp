/* 
 * Program: ListP.cpp
 * Author: James E. Hearn
 * Date: July 8th, 2013
 * Description: This program generates a sequece of twenty random numbers, from 0 to 4, 
 *              and inserts them into a linked list. That list is output to the terminal via
 *              the writeLinkedlist method. The method countValue counts the number of 
 *              times each number appears in the list.
 */

#include <iostream>	//Needed for console output
#include <list>	//Neede for list funcitonality
using namespace std;

int countValue(list<int> front, const int item);	//Declare method that counts the number of times each randm letter occurs in the linked list front

void writeLinkedList(list<int> front);				//Declare method to print the list of randomly-generated numbers to the console

int main(){
    list<int> front;	//Declare list of integers, called front
    int listCount;		//Declare integer to store number of ints to create in list, called listCount

    cout << "Enter the size of the list: ";		//Ask user for size of list
    cin >> listCount;							//Read keyboard input from user
    
    for (int i = 1; i <= listCount; i++)		//For each integer desired in list "front", add a random integer using push_back function
    front.push_back(rand()%5);
    
    cout << "Original List of Values:    "  << endl;
    
    writeLinkedList(front);			//Call writeLinkedList and process the list "front"
    
    cout << endl;

    for(int j = 0; j < 5; ++j)		//For each integer added ot the list (0 - 4), print the integer, call the CountValue function, and print the total number of each value in the list
    cout << "j = " << j << " : " << countValue(front,j) << endl;
	
    cout << endl;
    
    return 0;						//Exit program routine
}

/***************************FUNCTIONS BELOW**************************************/
/**This function counts the number of times a 0 through 4 integer occurs inside a 
	randomly generated list of numbers.
	pre: front contains int values
	post: ints matching item have been counted
*/
int countValue(list<int> front, const int item)
{
	int count = 0;	//Declare & initalizes count to 0

	for (list<int>::iterator ptr = front.begin(); ptr != front.end(); ++ptr)
		if (*ptr == item)	//If current int value referneced by iterator matches item, incease count value by 1
			++count;
	return count;
}


/**This function displays each value in a randomly-generated list.
	pre: front contains int values
	post: each value in th elist has been printed
*/
void writeLinkedList(list<int> front)
	{
		for (list<int>::iterator ptr = front.begin(); ptr != front.end(); ++ptr)
			std::cout << ' ' << *ptr;	//Print current int value referenced by iterator
    }

