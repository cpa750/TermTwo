// Session5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int NMAX =10;

//ALTERNATIVE IMPLEMENTATION - from Lecture notes
//Repeat
//      Set swapped flag to false
//      For array index i from 0 to N-2
//           If array[i]>array[i+1]
//               Swap elements i and i+1
//               Set swapped flag to true
//      End for loop
//Until swapped flag is false

int main()
{
	double Numbers[NMAX] = {31.2, 29.7, 53.5, 69.0, 23.7, 71.8, 49.3, 52.9, 51.3, 57.1};
	bool swappedFlag = true;
	
	while (swappedFlag)
	{
		swappedFlag=false; // for this cycle through all the array
		for (int j=0; j<NMAX-1; j++)
		{
			double temp;
			// Compare 2 values - increment a counter here
			if (Numbers[j]>Numbers[j+1])
			{
				temp = Numbers[j];
				Numbers[j]= Numbers[j+1];
				Numbers[j+1]= temp;
				swappedFlag=true;
				//increment a swap counter here
			}
		}
	}

	// display the sorted array:
	cout<<"ARRAY CONTENTS SORTED, IMPLEMENTATION2"<<endl;
	for (int i=0; i<NMAX; i++)
	{
		cout<<Numbers[i]<<endl;
	}
	//Display the values of the counter after the whole sort
	return 0;
}