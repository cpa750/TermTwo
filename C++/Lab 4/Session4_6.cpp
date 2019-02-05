// Description: strings and manipulation

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>    //NOTE the extra library
using namespace std;

int main()
{
	string Forename; 
	string Surname;
	string Fullname;
	
	ifstream namefile("name.txt");
	if (!namefile)
	{
		cout<<"Oh dear, your file could not be opened";
		exit(1); //an error code to denote what has gone wrong
	}
	namefile>>Forename>>Surname;

	//add code here that combines names into fullname so that it displays the name correctly

	cout<<Forename<<endl;
	cout<<Surname<<endl;
	cout<<Fullname<<endl;	
	
	return 0;
}