// Session5_1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <array>

using namespace std;

const int NMAX = 10;

//ALTERNATIVE IMPLEMENTATION - from Lecture notes
//Repeat
//      Set swapped flag to false
//      For array index i from 0 to N-2
//           If array[i]>array[i+1]
//               Swap elements i and i+1
//               Set swapped flag to true
//      End for loop
//Until swapped flag is false

/*
 * I did the question the wrong way round - all the custom logic is in
 * this file as opposed to Session4.cpp
 * The logic is the same - hence I will just compare
 * this implementation to the first using counters
 */

int main()
{
	double Numbers[NMAX] = {31.2, 53.5, 69.0, 23.7, 57.1, 49.3, 52.9, 71.8, 51.3, 29.7};
	bool swappedFlag = true;
    int counter {0};
    int swapCounter {0};
	
	while (swappedFlag)
	{
		swappedFlag=false; // for this cycle through all the array
		for (int j=0; j<NMAX-1; j++)
		{
		    array<bool, NMAX> bools {false, false, false, false, false, false, false, false, false, false};
			double temp;
            ++counter;
			if (Numbers[j]>Numbers[j+1])
			{
				temp = Numbers[j];
				Numbers[j]= Numbers[j+1];
				Numbers[j+1]= temp;
				swappedFlag=true;
				++swapCounter;

				bools[j] = true;
				bools[j+1] = true;
			}
			for (int i {0}; i < NMAX; ++i)
            {
			    if (bools[i])
                {
			        cout << "*" << Numbers[i] << "*, ";
                }
			    else cout << Numbers[i] << ", ";
            }
			cout << endl;
		}
	}

	// display the sorted array:
	cout<<"ARRAY CONTENTS SORTED, IMPLEMENTATION2"<<endl;
	for (int i=0; i<NMAX; i++)
    {
        cout << Numbers[i] << endl;
    }
    cout << "Counter: " << counter << endl;
	cout << "Swap Counter: " << swapCounter << endl;
	return 0;
}