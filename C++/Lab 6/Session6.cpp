// Session6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip> // only used to tidy up the console output here
#include <string>
using namespace std;

const int MAXCARS =5; //Always use this instead of magic numbers in code!

int main()
{
    string ModelName[MAXCARS]	 = {"Fiesta",	"Impreza", "Gallardo", "Corsa",	"Polo"};
    string Registration[MAXCARS] = {"FH52ABC",	"SUB123",	"LAM80",	 "AH56XYZ", "NG11BNS"};
    double EngineSize[MAXCARS]	 = {1.56,		2.5,		6.5,		1.4,			1.5};
    double Price[MAXCARS]		 = {9695,		17737,		201900,		7895,		10490};

    int IndexMostExpensive;
    double PriceMostExpensive;

    // initialise to the details of first in array
    IndexMostExpensive=0;
    PriceMostExpensive = Price[IndexMostExpensive];

    // display a header line - note use of \t for tabs to try to line up - not successful, but I'm not bothered
    cout<<"Model"<<"\t\tReg Num"<<"\tPrice"<<"\tEngine Size"<<endl;
    // note use here of iomanip functions to set the width of EACH field (eg 10 chars) and filling the spare with ' '
    // this makes for a nicer alignment than the commented out line which gets messed up by the Lamborghini gallardo
    for (int i=0;   i<MAXCARS;    i++)
    {
        //cout<<ModelName[i]<<"\t"<<Registration[i]<<"\t"<<Price[i]<<"\t"<<EngineSize[i]<<endl;
        cout<<setfill(' ')<<setw(10)<<ModelName[i];
        cout<<setfill(' ')<<setw(10)<<Registration[i];
        cout<<setfill(' ')<<setw(10)<<Price[i];
        cout<<setfill(' ')<<setw(10)<<EngineSize[i];
        cout<<endl;

        // now find out of this car is the most expensive
        if (Price[i]>PriceMostExpensive)
        {
            IndexMostExpensive =i;			//update this index
            PriceMostExpensive = Price[i]; //update this price
        }
    }

    // gone through all the cars.
    // now can display details about most expensive car
    cout<<"Most expensive Car is "<<ModelName[IndexMostExpensive]<<" at a price of "<<Price[IndexMostExpensive]<<endl;
    cout<<"With reg num of "<<Registration[IndexMostExpensive]<<" and engine size of "<<EngineSize[IndexMostExpensive]<<endl;

    return 0;
}

