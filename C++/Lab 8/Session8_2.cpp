// Session8_2.cpp : Defines the entry point for the console application.
//Problem solving
//Write a program that prompts the user to enter a set of positive integers in any order (stopping when they enter 0). 
//It then reports the highest number they entered. Do NOT use an array for the numbers.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int currentHighest = 0;
	int currentValue = 0;

	while (currentValue>=0)
	{
		cout<<"Enter any integer or -1 to end :";
		cin>>currentValue;
		// only bother to compare if value is above zero
		if ((currentValue>0)&&(currentValue>currentHighest))
		{
			currentHighest=currentValue;
		}
	}
	cout<<"The highest integer entered was: "<<currentHighest<<endl;
	
	return 0;
}