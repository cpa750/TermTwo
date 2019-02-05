#include <iostream>
#include <fstream> //note the need to include the file handling library
using namespace std; 

const int PINLength =4; //this is a GLOBAL constant because it is outside main function

int main()
{
	int PIN[PINLength];
	int counter=0;
	ifstream myfile("../test.txt");
	
	if (!myfile)
	{
		cout<<"Oh dear, your file could not be opened";
		exit(1); //an error code to denote what has gone wrong
	}
	// if we've reached here, at least it opened
	// read 4 integers from the file
	while (counter<PINLength)
	{
		myfile>>PIN[counter];
		counter++;
	}
	myfile.close(); //not actually necessary, but tidy

	// now display your secret PIN!
	cout<<"My PIN is: "<<endl;
	for (int i=0;i<PINLength;i++)
	{
		cout<<PIN[i];
	}
	cout<<endl;
	return 0;
}
	

	
