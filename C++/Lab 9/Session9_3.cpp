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
	void display();
	double ratio(); //how much it costs per cc of engine!
	void displaySpace();
	void addSpace(int newSize, int fillValue);
private:
	int* ptrToSpace;
	int ptrSize;
	string ModelName;
	string Registration;
	double EngineSize;
	double Price;
	
};

int main()
{
	// declare a couple of Objects of class Car - note how they are initialised via a CONSTRUCTOR
	Car myCar("FordFiesta", "123ABC", 2.2, 9900);
	Car otherCar("FordKa", "999zzz", 1.4, 7500);

	// now run their functions
	myCar.display();
	myCar.addSpace(5, 99);
	myCar.displaySpace();

	//otherCar.display();

	if (myCar.ratio()>otherCar.ratio())
	{
		cout<<"My car is better value"<<endl;
	}
	else
	{
		cout<<"Other car is better value"<<endl;
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
	 ptrSize = 0;
}

void Car::display()
{
	cout<<"Model:"<<ModelName<<" Registration:"<<Registration<<" Engine size(litres):"<<EngineSize<<" Price:"<<Price<<endl;
}

double Car::ratio() //how much it costs per cc of engine!
{
	return EngineSize/Price;
}

void Car::addSpace(int newSize, int fillValue)
{
	ptrToSpace = new int[newSize];
	ptrSize = newSize;
	for (int i=0;i<ptrSize; i++)
	{
		ptrToSpace[i] = fillValue;
	}
}
void Car::displaySpace()
{
	for (int i=0;i<ptrSize; i++)
	{
		cout<<ptrToSpace[i]<<" ";
	}
	cout<<endl;
}