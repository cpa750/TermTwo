// Session6_1.cpp : Defines the entry point for the console application.
//using struct

#include <iostream>
#include <iomanip> // only used to tidy up the console output here
#include <string>
using namespace std;

const int MAXCARS =5; //Always use this instead of magic numbers in code!

// Note how Car only includes the items for a SINGLE car
struct Car
{
	string ModelName;
	string Registration;
	double EngineSize;
	double Price;
};

int main()
{
	// note now a SINGLE array of Car, each Car initialised as a group of items 
	Car ListCars[MAXCARS] =
							{
								{"Fiesta",		"FH52ABC",	1.56,	9695},
								{"Impreza",		"SUB123",	2.5,	17737},
								{"Gallardo",	"LAM80",	6.5,	201900},
								{"Corsa",		"AH56XYZ",	1.4,	7895},
								{"Polo",		"NG11BNS",	1.5,	10490 }
							};

	int IndexMostExpensive;
	double PriceMostExpensive;

	// initialise to the details of first in array
	IndexMostExpensive=0;
	PriceMostExpensive = ListCars[IndexMostExpensive].Price;

	int indexCheapest = 0;
	double priceCheapest = ListCars[indexCheapest].Price;

	int indexSmallest = 0;
	double sizeSmallest = ListCars[indexSmallest].EngineSize;

	// display a header line - note use of \t for tabs to try to line up - not successful, but I'm not bothered 
	cout<<"Model"<<"\t\tReg Num"<<"\tPrice"<<"\tEngine Size"<<endl;
	// note use here of iomanip functions to set the width of EACH field (eg 10 chars) and filling the spare with ' '
	// this makes for a nicer alignment than the commented out line which gets messed up by the Lamborghini gallardo
	for (int i=0;   i<MAXCARS;    i++)
	{
		//cout<<ModelName[i]<<"\t"<<Registration[i]<<"\t"<<Price[i]<<"\t"<<EngineSize[i]<<endl;
		cout<<setfill(' ')<<setw(10)<<ListCars[i].ModelName;
		cout<<setfill(' ')<<setw(10)<<ListCars[i].Registration;
		cout<<setfill(' ')<<setw(10)<<ListCars[i].Price;
		cout<<setfill(' ')<<setw(10)<<ListCars[i].EngineSize;
		cout<<endl;

		// now find out of this car is the most expensive
		if (ListCars[i].Price < priceCheapest)
		{
			indexCheapest =i;			//update this index
			priceCheapest = ListCars[i].Price; //update this price
		}
		else if (ListCars[i].Price > PriceMostExpensive)
		{
			IndexMostExpensive = i;
			PriceMostExpensive = ListCars[i].Price;
		}

		if (ListCars[i].EngineSize < sizeSmallest)
		{
			indexSmallest = i;
			sizeSmallest = ListCars[i].EngineSize;
		}
	}

	// gone through all the cars.
	// now can display details about most expensive car
	cout<<"Most expensive Car is "<<ListCars[IndexMostExpensive].ModelName<<" at a price of "<<ListCars[IndexMostExpensive].Price<<endl;
	cout<<"With reg num of "<<ListCars[IndexMostExpensive].Registration<<" and engine size of "<<ListCars[IndexMostExpensive].EngineSize<<endl;

	std::cout << '\n';

	cout<<"Cheapest Car is "<<ListCars[indexCheapest].ModelName<<" at a price of "<<ListCars[indexCheapest].Price<<endl;
	cout<<"With reg num of "<<ListCars[indexCheapest].Registration<<" and engine size of "<<ListCars[indexCheapest].EngineSize<<endl;

	std::cout << '\n';

	cout<<"Smallest Car is "<<ListCars[indexSmallest].ModelName<<" at a price of "<<ListCars[indexSmallest].Price<<endl;
	cout<<"With reg num of "<<ListCars[indexSmallest].Registration<<" and engine size of "<<ListCars[indexSmallest].EngineSize<<endl;

	return 0;
}

