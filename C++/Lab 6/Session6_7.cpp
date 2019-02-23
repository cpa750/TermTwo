// Session6_7.cpp : Defines the entry point for the console application.
//pointers - very little intro

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 33;
	// standard variable declaration -  n can hold an int, and currently holds the value 33
	int* p = &n;
	//p is a pointer to an int variable, and currently holds the address of n

	cout<<"Contents of n =  "<<n<<endl;
	cout<<"Contents of p =  "<<p<<endl;
	cout<<"Contents of contents of p = "<<*p<<endl;
	
	return 0;
}
