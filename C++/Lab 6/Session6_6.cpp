// Session6_6.cpp : Defines the entry point for the console application.
//using struct
// reading from file


#include "stdafx.h"
#include <iostream>
#include <iomanip> // only used to tidy up the console output here
#include <fstream> // added file handling
#include <string>
using namespace std;

const int MAXSTUDENTS = 5; //Always use this instead of magic numbers in code!
const int MAXMODULES = 3;

// a single module
struct Module
{
	string Name;
	int Mark;
};

// Note how Student only includes the items for a SINGLE Student
struct Student
{
	string Name;
	int ID;
	Module ModList[MAXMODULES];	
};

int main()
{
	// note  a SINGLE array of Student
	Student ListStudents[MAXSTUDENTS];

	// read Students from file
	ifstream inFile("students.txt"); // declare an OBJECT for handling file input and associate it with the students.txt file
	if (!inFile)
	{
		cout<<"Oh dear, your file is not here"<<endl;
		return 1; //an error - exit now
	}
	// read all the Cars from the file
	for (int i=0;   i<MAXSTUDENTS;    i++)
	{
		inFile>>ListStudents[i].Name>>ListStudents[i].ID;
		for (int j=0; j<MAXMODULES; j++)
		{
			inFile>>ListStudents[i].ModList[j].Name>>ListStudents[i].ModList[j].Mark;
		}
	}
	inFile.close();

	int IndexStudent;
	int LowestID; 

	// initialise to the details of first in array
	IndexStudent=0;
	LowestID = ListStudents[IndexStudent].ID;

	// display a header line - note use of \t for tabs to try to line up - not successful, but I'm not bothered 
	cout<<"Name"<<"\tID"<<endl;
	for (int i=0;   i<MAXSTUDENTS;    i++)
	{
		cout<<setfill(' ')<<setw(10)<<ListStudents[i].Name;
		cout<<setfill(' ')<<setw(10)<<ListStudents[i].ID;
		cout<<endl;

		// find lowest ID?
		if (ListStudents[i].ID<LowestID)
		{
			IndexStudent =i;			//update this index
			LowestID = ListStudents[i].ID; //update this ID
		}
	}

	// gone through all the Students.
	// now can display details about lowest ID
	cout<<"Student with lowest ID is "<<ListStudents[IndexStudent].Name<<" with ID of "<<ListStudents[IndexStudent].ID<<endl;

	return 0;
}