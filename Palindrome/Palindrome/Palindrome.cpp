/* 
 *	Program: Palindrome.cpp
 *	Date: July 25, 2013
 *	Author: James E Hearn
 *	Description: This program takes, as its input, a string from the user, pushes the string into a
 *					queue and a stack, and then compares the stack and queue for equal characters.
 *					If all characters are equal, isPalindrome = true.
 */

#include<queue>
#include<stack>
#include<iostream>
#include<string>

int main() {
    bool isPalindrome = true;

    std::queue<char> Q;
    std::stack<char> S;

    std::string str; 
    std::cout << "Enter a word : ";
    std::getline (std::cin, str, '\n');
	
    //Enqueue the string into the queue
	for (unsigned i = 0; i < str.length(); ++i) {
		Q.push(str.at(i));
	}

	// push the string into the stack
	for (unsigned i = 0; i < str.length(); ++i) {
		S.push(str.at(i));
	}
    
    //While the stack is not empty and the queue is not empty do the following:

    /*if the front of the queue is not equal to the top of the stack:
    dequeue the queue;
    pop the stack;
    isPalindrome=false;
    else
    dequeue the queue;
    pop the stack;
      */
    while (Q.size() != 0 && S.size() !=0) {
    if (Q.front() != S.top()) {
        Q.pop();
        S.pop();
        isPalindrome = false;
    }
    else {
        Q.pop();
        S.pop();
         }
    }
    
    if (isPalindrome)
       std::cout << str << " is a palindrome" << std::endl;
    else
        std::cout << str << " is not a palindrome " << std::endl;
return 0;
}