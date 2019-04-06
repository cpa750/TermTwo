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

private:
	string ModelName;
	string Registration;
	double EngineSize;
	double Price;
};
const int MAXCARS=3;
int main()
{
	// declare a couple of Objects of class Car - note how they are initialised via a CONSTRUCTOR
	Car myCarList[MAXCARS] ={Car("FordFiesta", "123ABC", 2.2, 9900),
							Car("FordKa", "999zzz", 1.4, 7500),
							Car("LotusPlus2", "LOT115", 1.6, 3500)
							};
	
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