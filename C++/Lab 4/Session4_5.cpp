#include <iostream>
#include <string>    //NOTE the extra library
#include <array>
using namespace std;

int main()
{
	string Forename = "Fred"; 
	string Surname = "Bloggs";
	string Fullname {Forename + " " + Surname};

	array<string, 2> names {"John", "Doe"};
	string fullname2;
	for (int i {0}; i < names.size(); ++i)
	{
		if (i == 0) fullname2 += names.at(i);
		else fullname2 += " " + names.at(i);
	}
	cout << fullname2 << endl;

	cout<<Forename<<endl;
	cout<<Surname<<endl;
	cout<<Fullname<<endl;	
	
	return 0;
}