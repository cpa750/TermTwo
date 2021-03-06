// Session8.cpp : Defines the entry point for the console application.
//Using a pointer with new and delete to allow dynamically sized arrays from arbitrarily sized file

#include "stdafx.h"
#include <iostream>
#include <iomanip> // only used to tidy up the console output here
#include <fstream> 
#include <string>
using namespace std;

struct Car
{
	string ModelName;
	string Registration;
	double EngineSize;
	double Price;
};

// return number of cars in file or -1 if file not found
int FindNumCars(string CarFileName);

// return index of most expensive car
int FindMostExpensive(Car List[], int NumCars); 

// load cars from file into the newly sized array
int LoadCars(Car List[], int NumCars, string CarFileName);

void DisplayCars(Car List[], int NumCars);

int main()
{
	//check file to find number of cars in it
	// create a new array sized to hold the cars 
	// load the file contents into the array
	// display all the cars
	// find the most expensive
	// display the most expensive

	int NumCars = FindNumCars ("cars.txt");

	if (NumCars == -1)
	{
		cout<<"Oh dear, no file here "<<endl;
		return 1; //exit program early
	}
	// will only get to here if NumCars ok, so don't bother with 'else'

	// use a pointer and new to acquire space from heap big enough for all cars
	Car* StockList = new Car[NumCars];

	// now confidently load the cars into the array
	// there are other things that could go wrong, but we won't check at present
	LoadCars(StockList, NumCars, "cars.txt");

	DisplayCars(StockList, NumCars);

	int indexMost = FindMostExpensive(StockList, NumCars);
	// now can display details about most expensive car
	cout<<"Most expensive Car is "<<StockList[indexMost].ModelName<<" at a price of "<<StockList[indexMost].Price<<endl;
	cout<<"With reg num of "<<StockList[indexMost].Registration<<" and engine size of "<<StockList[indexMost].EngineSize<<endl;

	//now free the array back to the heap
	delete [] StockList;

	return 0;
}

int FindNumCars(string CarFileName)
{
	// read the file, counting lines, until end of file reached
	ifstream inFile(CarFileName); // declare an OBJECT for handling file input and associate it with the cars.txt file
	if (!inFile)
	{
		return -1; //no file found - return -1
	}
	int counter=0;
	string tempLine; //to hold lines read
	while (!inFile.eof())
	{
		getline(inFile, tempLine);	// this reads whole line into tempLine since we are not bothered about what is in it yet
		counter++;
	}
	// may need to check last line in case it contains nothing but eof
	
	return counter; // count of lines is number of cars
}

int LoadCars(Car List[], int NumCars, string CarFileName)
{
	// read cars from file specified as parameter
	ifstream inFile(CarFileName); // declare an OBJECT for handling file input and associate it with the cars.txt file
	if (!inFile)
	{
		cout<<"Oh dear, your file is not here"<<endl;
		return 1; //an error - return a value to indicate this
	}
	// read Cars from the file up to number specified into array provided
	for (int i=0;   i<NumCars;    i++)
	{
		inFile>>List[i].ModelName>>List[i].Registration>>List[i].EngineSize>>List[i].Price;
	}
	inFile.close();
	return 0;
}

int FindMostExpensive(Car List[], int NumCars)
{
	int IndexMostExpensive;
	double PriceMostExpensive;

	// initialise to the details of first in array
	IndexMostExpensive=0;
	PriceMostExpensive = List[IndexMostExpensive].Price;

	for (int i=0;   i<NumCars;    i++)
	{
		// now find out of this car is the most expensive
		if (List[i].Price>PriceMostExpensive)
		{
			IndexMostExpensive =i;			//update this index
			PriceMostExpensive = List[i].Price; //update this price
		}
	}
	return IndexMostExpensive; //should be index of Most expensive
}

void DisplayCars(Car List[], int NumCars)
{
	// display a header line - note use of \t for tabs to try to line up 
	cout<<"Model"<<"\t\tReg Num"<<"\tPrice"<<"\tEngine Size"<<endl;
	// note use here of iomanip functions to set the width of EACH field (eg 10 chars) and filling the spare with ' '
	for (int i=0;   i<NumCars;    i++)
	{
		cout<<setfill(' ')<<setw(10)<<List[i].ModelName;
		cout<<setfill(' ')<<setw(10)<<List[i].Registration;
		cout<<setfill(' ')<<setw(10)<<List[i].Price;
		cout<<setfill(' ')<<setw(10)<<List[i].EngineSize;
		cout<<endl;
	}
}
