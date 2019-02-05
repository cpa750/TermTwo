#include <iostream>
#include <fstream>
#include <string>    //NOTE the extra library
using namespace std;

int main()
{
	string Forename; 
	string Surname;
	string Fullname;
	
	ifstream namefile("../Name.txt");
	if (!namefile)
	{
		cout<<"Oh dear, your file could not be opened";
		exit(1); //an error code to denote what has gone wrong
	}
	namefile>>Forename>>Surname;
	namefile.close();

	Fullname = Forename + " " + Surname;

	ofstream outfile("../reversenames.txt");
	outfile << Surname << ' ' << Forename;
	outfile.close();

	cout<<Forename<<endl;
	cout<<Surname<<endl;
	cout<<Fullname<<endl;	
	
	return 0;
}