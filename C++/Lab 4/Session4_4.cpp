//Basic file input AND output

#include "stdafx.h"
#include <iostream>
#include <fstream> //note the need to include the file handling library
using namespace std;

const int PINLength =4;
int main()
{
	int PIN[PINLength];
	int counter=0;
	ifstream myfile("Test.txt"); //for input ie file reading
	ofstream myinverted("TestInvert.txt"); //for output ie file writing
	
	if ((!myfile)||(!myinverted))
	{
		cout<<"Oh dear, one of your files could not be opened"<<endl;
		exit(1); //an error code to denote what has gone wrong
	}
	// if we've reached here, at least they opened
	while (counter<PINLength)
	{
		myfile>>PIN[counter]; //reading from file to array
		counter++;
	}
	myfile.close(); //not actually necessary, but tidy

	// now output a modified version of the PIN to a file
	cout<<"My PIN has been written to another file "<<endl;

	for (int i=0;i<PINLength;i++)
	{
		myinverted<<9-PIN[i]<<" "; // just subtracting each from 9 to do something to it!
	}
	myinverted.close();
	
	return 0;
}
	