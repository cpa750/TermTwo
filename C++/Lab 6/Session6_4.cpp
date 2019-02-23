// Session6_4.cpp : Defines the entry point for the console application.
//For you to do...

#include "stdafx.h"
#include <iostream>
using namespace std;

const int MAXPLANTS =6; //Always use this instead of magic numbers in code!

int main()
{
	string CommonName[MAXPLANTS]	 = {"Bluebell",	"Snowdrop", "TenbyDaffodil", "WinterAconite","DogsToothViolet", "SummerSnowflake"};
	string LatinName[MAXPLANTS] = {"EndymionNonScripta","GalanthusNivalis",	"NarcissusObvalis",	 "EranthisHyemalis", "ErythroniumDensCanis","LeucojumAestivum"};
	double Height[MAXPLANTS]	 = {0.3, 0.15, 0.4,	0.1, 0.15, 0.3};
	double Price[MAXPLANTS]		 = {1.25, 1.55,	3.25,2.0,5.95, 4.50};

	cout<<"Empty program for code to be written"<<endl;
	return 0;
}