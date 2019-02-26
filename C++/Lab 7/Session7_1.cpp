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
	double avg;
};

int LoadStudents(Student List[], int numStudents, int numModules, string StudentFileName);
void DisplayStudents (Student List[], int numStudents);
int FindLowestID (Student List[], int numStudents);

int main()
{
	// note  a SINGLE array of Student
	Student ListStudents[MAXSTUDENTS];

	// read Students from file
	if (LoadStudents(ListStudents, MAXSTUDENTS, MAXMODULES, "../Students.txt")==1) return 1;

	int IndexStudent;

    DisplayStudents(ListStudents, MAXSTUDENTS);
	IndexStudent = FindLowestID(ListStudents, MAXSTUDENTS);
	// gone through all the Students.
	// now can display details about lowest ID
	cout<<"Student with lowest ID is "<<ListStudents[IndexStudent].Name<<" with ID of "<<ListStudents[IndexStudent].ID<<endl;

	return 0;
}

int LoadStudents(Student List[], int numStudents, int numModules, string StudentFileName)
{
	ifstream inFile(StudentFileName); // declare an OBJECT for handling file input and associate it with the students.txt file
	if (!inFile)
	{
		cout<<"Oh dear, your file is not here"<<endl;
		return 1; //an error - exit now
	}
	for (int i=0;   i<numStudents;    i++)
	{
		inFile>>List[i].Name>>List[i].ID;
		for (int j=0; j<numModules; j++)
		{
			inFile>>List[i].ModList[j].Name>>List[i].ModList[j].Mark;
		}
	}
	inFile.close();
	return 0;
}

void DisplayStudents (Student List[], int numStudents)
{
    cout << "Name" << "\tID" << "\tAvg" << endl;
    for (int i{0}; i < numStudents; ++i)
    {
        cout << setfill(' ') << setw(10) << List[i].Name;
        cout << setfill(' ') << setw(10) << List[i].ID;
        cout << setfill(' ') << setw(10) << List[i].avg;
        cout << endl;
    }
}

int FindLowestID (Student List[], int numStudents)
{
    int index {0};
    int id {List[index].ID};
    for (int i{0}; i < numStudents; ++i)
    {
        if (List[i].ID < id)
        {
            index = i;			//update this index
            id = List[i].ID; //update this ID
        }
    }
    return index;
}
