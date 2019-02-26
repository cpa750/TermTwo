#include <array>
#include <iostream>
#include <iomanip> // only used to tidy up the console output here
#include <fstream> // added file handling
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

// FUNCTIONS!
int FindMostExpensive(Car List[], int NumCars);
void DisplayCarData(Car List[], int numCars);
int LoadCars(Car List[], int NumCars, string CarFileName);

int main()
{
	// note now a SINGLE array of Car, NO LONGER initialised 
	Car ListCars[MAXCARS];

	// call the function and exit if it went wrong - could return different numbers for different reasons
	if (LoadCars (ListCars, MAXCARS, "../cars.txt")==1) return 1;

	DisplayCarData(ListCars, MAXCARS);

	int IndexMostExpensive;
	IndexMostExpensive = FindMostExpensive(ListCars, MAXCARS);
	cout<<"Most expensive Car is "<<ListCars[IndexMostExpensive].ModelName<<" at a price of "<<ListCars[IndexMostExpensive].Price<<endl;
	cout<<"With reg num of "<<ListCars[IndexMostExpensive].Registration<<" and engine size of "<<ListCars[IndexMostExpensive].EngineSize<<endl;

	return 0;
}

int FindMostExpensive(Car List[], int NumCars)
{
	int index {0};
	double price {0};
	for (int i {0}; i < NumCars; ++i)
	{
		if (List[i].Price > price)
		{
			index = i;			//update this index
			price = List[i].Price; //update this price
		}
	}
	return index; //should be index of Most expensive
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

void DisplayCarData(Car List[], int numCars)
{
    cout<<"Model"<<"\t\tReg Num"<<"\tPrice"<<"\tEngine Size"<<endl;
    for (int i {0}; i < numCars; i++)
    {
        //cout<<ModelName[i]<<"\t"<<Registration[i]<<"\t"<<Price[i]<<"\t"<<EngineSize[i]<<endl;
        cout << setfill(' ') << setw(10) << List[i].ModelName;
        cout << setfill(' ') << setw(10) << List[i].Registration;
        cout << setfill(' ') << setw(10) << List[i].Price;
        cout << setfill(' ') << setw(10) << List[i].EngineSize;
        cout << endl;
    }
}
