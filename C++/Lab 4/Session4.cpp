// Session4.cpp : Defines the entry point for the console application.
#include <iostream>
#include <string>
using namespace std;

const int NMAX =10;

int main()
{
	double Numbers[NMAX] = {31.2, 29.7, 53.5, 69.0, 23.7, 71.8, 49.3, 52.9, 51.3, 57.1};
	int counter {0};
	int swapCounter {0};

	// note this top counter, i, counts down
	for (int i=NMAX-1; i>0; i--)
	{
		//and this counter, j, only goes as far as the current i value 
		// it means it doesn't go over the elements that have already 'bubbled up' to the end of the array
		for (int j=0; j<i; j++)
		{
			double temp;
			++counter;
			if (Numbers[j]>Numbers[j+1])
			{
				temp = Numbers[j];
				Numbers[j]= Numbers[j+1];
				Numbers[j+1]= temp;
				++swapCounter;
			}
		}
	}

	// display the sorted array:
	cout<<"ARRAY CONTENTS SORTED, IMPLEMENTATION 1 "<<endl;
	for (int i=0; i<NMAX; i++)
	{
		cout<<Numbers[i]<<endl;
	}
	cout << "Counter: " << counter << endl;
	cout << "Swap Counter: " << swapCounter << endl;
	//Display the values of the counter after the whole sort
	return 0;
}



