// Session6.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <iomanip> // only used to tidy up the console output here
#include <string>
using namespace std;

const int MAXCARS =5; //Always use this instead of magic numbers in code!

int main()
{
    string ModelName[MAXCARS]	 = {"Fiesta",	"Impreza",  "Gallardo",  "Corsa",	"Polo"};
    string Registration[MAXCARS] = {"FH52ABC",	"SUB123",	"LAM80",	 "AH56XYZ", "NG11BNS"};
    double EngineSize[MAXCARS]	 = {1.56,		2.5,		6.5,		 1.4,		1.5};
    double Price[MAXCARS]		 = {9695,		17737,		201900,		7895,		10490};

    int indexCheapest;
    double priceCheapest;

    int indexMostExpensive;
    double priceMostExpensive;

    int indexSmallest;
    double sizeSmallest;

    // initialise to the details of first in array
    indexCheapest=0;
    priceCheapest = Price[indexCheapest];

    indexMostExpensive = 0;
    priceMostExpensive = Price[indexMostExpensive];

    indexSmallest = 0;
    sizeSmallest = EngineSize[indexSmallest];

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
        if (Price[i]<priceCheapest)
        {
            indexCheapest =i;			//update this index
            priceCheapest = Price[i]; //update this price
        }
        else if (Price[i] > priceMostExpensive)
        {
            indexMostExpensive = i;
            priceMostExpensive = Price[i];
        }

        if (EngineSize[i] < sizeSmallest)
        {
            indexSmallest = i;
            sizeSmallest = EngineSize[i];
        }
    }

    // gone through all the cars.
    // now can display details about most expensive car
    cout<<"Cheapest car is "<<ModelName[indexCheapest]<<" at a price of "<<Price[indexCheapest]<<endl;
    cout<<"With reg num of "<<Registration[indexCheapest]<<" and engine size of "<<EngineSize[indexCheapest]<<endl;

    std::cout << '\n';

    cout<<"Most expensive car is "<<ModelName[indexMostExpensive]<<" at a price of "<<Price[indexMostExpensive]<<endl;
    cout<<"With reg num of "<<Registration[indexMostExpensive]<<" and engine size of "<<EngineSize[indexMostExpensive]<<endl;

    std::cout << '\n';

    cout<<"Smallest car is "<<ModelName[indexSmallest]<<" at a price of "<<Price[indexSmallest]<<endl;
    cout<<"With reg num of "<<Registration[indexSmallest]<<" and engine size of "<<EngineSize[indexSmallest]<<endl;

    return 0;
}

