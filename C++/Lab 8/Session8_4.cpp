// Session8_4.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <iomanip> // only used to tidy up the console output here
#include <fstream> 
#include <string>
using namespace std;

// note this array used to generate the correct week number based on the remainder weeknum%4
string dinnerName[4] = {"D", "A", "B", "C"}; //starts with D because remainder of 0 ie weeknum =4 gives D

int main()
{
	int NumWeeks =36;
	//dinner calculation  note that we iterate week numbers from 1 to 36 inclusive
	cout<<"Week Dinner"<<endl;
	for (int i=1;i<=NumWeeks;i++)
	{
		string dinner = dinnerName[i%4];
		cout<<i<<"\t"<<dinner<<endl;
	}
	return 0;
}