/*
 * String_Input.cpp
 *
 *  Created on: May 14, 2020
 *      Author: Fred Shattell
 *
 *      Demonstrate an understanding of basic C++ programming concepts by completing the following:

Program: Create a simple C++ console application that will write a program that will take string input from a user.
 Your program should reverse the string and then print the output to the screen. Take input from the user 3 times
 for varying string lengths.
Program Analysis: Given your program implementation, discuss and identify the possible vulnerabilities that may exist.
 If present, discuss solutions to minimize the vulnerabilities. Then discuss and identify possible problems that can
 result in errors for string manipulation of data. Your program analysis should be 1-2 pages in length.
 *
 */
// Program for reversing a user input string
#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two the corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
	string userString1;
	string userString2;
	string userString3;
	cout<< "Enter your first string:"<<endl;
	getline (cin,userString1);
	reverseStr(userString1);
	cout<< "Enter your second string:"<<endl;
	getline (cin,userString2);
	reverseStr(userString2);
	cout<< "Enter your third string:"<<endl;
	getline (cin,userString3);
	reverseStr(userString3);
	cout << "Your first string is: " +  userString1 + "\nYour second string is: " + userString2 + "\nYour third string is: "
    + userString3 << endl;
	return 0;
}




