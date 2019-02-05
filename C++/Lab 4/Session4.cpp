// Session4.cpp : Defines the entry point for the console application.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int NMAX =10;

int main()
{
	double Numbers[NMAX] = {};
	int counter {0};
	int swapCounter {0};
    ifstream file("../array.txt");
    if (!file)
    {
        cout << "File could not be opened" << endl;
        exit(-1);
    }
    for (int i {0}; i < NMAX; ++i)
    {
        file >> Numbers[i];
    }
    file.close();
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

	ofstream outFile("../sorted.txt");
	for (double i: Numbers)
    {
	    outFile << i << " ";
    }

	return 0;
}



