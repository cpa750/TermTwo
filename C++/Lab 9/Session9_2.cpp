// Session9.cpp : Defines the entry point for the console application.
// Class like Session 8 Car
#include "stdafx.h"
#include <iostream>
#include <iomanip> // only used to tidy up the console output here
#include <fstream> 
#include <string>
using namespace std;

class Car
{
public:
	// see later for the bodies of the functions!
	Car(string mName, string reg, double eng, double pri);
	Car(); //constructor that does nothing
	void display();
	double ratio(); //how much it costs per cc of engine!
	void load(ifstream& carFile);

private:
	string ModelName;
	string Registration;
	double EngineSize;
	double Price;
};
const int MAXCARS=3;
int main()
{
	// declare a list of Cars - but now we will load it from a file 
	Car myCarList[MAXCARS];
						
	ifstream aFile("cars.txt");
	if (!aFile)
	{
		cout<<"Oh dear, file invalid"<<endl;
		return 1;
	}
	//now read each car from the file
	for (int i=0;i<MAXCARS;i++)
	{
		myCarList[i].load(aFile);
	}
	aFile.close();

	cout<<"Model         Reg        Engine    Price"<<endl;
	// now run their functions
	for (int i=0;i<MAXCARS;i++)
	{
		myCarList[i].display();
	}

	return 0;
}

Car::Car(string mName, string reg, double eng, double pri)
{
	// store the parameter values for this object private data
	 ModelName = mName;
	 Registration = reg;
	 EngineSize = eng;
	 Price = pri;
}

Car::Car()
{
	// set up a value that shows the data not properly loaded
	ModelName = "Unspecified";
};

void Car::display()
{
	// changed from last one - only displays contents
	cout<<setfill(' ')<<setw(10)<<ModelName<<setfill(' ')<<setw(10)<<Registration;
	cout<<setfill(' ')<<setw(10)<<EngineSize<<setfill(' ')<<setw(10)<<Price<<endl;
}

double Car::ratio() //how much it costs per cc of engine!
{
	return EngineSize/Price;
}

void Car::load(ifstream& carFile)
{
	carFile>>ModelName>>Registration>>EngineSize>>Price;
		
}