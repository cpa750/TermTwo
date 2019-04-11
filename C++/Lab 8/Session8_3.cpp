// Session8_2.cpp : Defines the entry point for the console application.
//Problem solving
//Write a program that prompts the user to enter a set of positive integers in any order (stopping when they enter 0). 
//It then reports the highest number they entered. Do NOT use an array for the numbers.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string valString;
	int currentHighest;
	bool highest = false;
	bool ended = false;
	while (!ended)
	{
		int currentValue;
		cout<<"Enter an integer or Y to end :";
		cin>>valString;
		// need to check whether valString contains Y or an integer
		if (valString=="Y") 
		{
			ended = true;
		}
		else
		{
			// convert string to integer using stringstream
			stringstream valStr(valString);
			if ( !(valStr >>currentValue))
			{
				ended = true;   // conversion failed, so not a valid number so exit the loop
			}
			// if highestValue not yet set, or current higher than current highest, then update currentHighest
			else if (!highest||(currentValue>currentHighest))
			{
				currentHighest=currentValue;
				highest = true;
			}
		}
	}
	cout<<"The highest integer entered was: "<<currentHighest<<endl;

	return 0;
}