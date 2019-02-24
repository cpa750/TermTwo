// Session6_4.cpp : Defines the entry point for the console application.
//For you to do...

#include <array>
#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

const int MAXPLANTS =6; //Always use this instead of magic numbers in code!

int main()
{
	struct Plant
	{
		std::string commonName;
		std::string latinName;
		double height;
		double price;
	};

	Plant a;
	Plant b;

	const size_t PLANTSZ {2};
	std::array<Plant, PLANTSZ> plants {a, b};

	std::ifstream inFile("../Plants.txt");

	for (int i {0}; i < PLANTSZ; ++i)
	{
		inFile >> plants[i].commonName >> plants[i].latinName >> plants[i].height >> plants[i].price;
	}
	// Can't use an iterator here as the values get assigned to the iterator and not the object in the array

	inFile.close();

	double totalPrice {0};
	double highestPrice {0};

	for (Plant i: plants)
	{
		totalPrice += i.price;
		if (i.price > highestPrice) highestPrice = i.price;
	}


	cout << "Total price: $" << totalPrice;

	std::ofstream outFile("../Summary.txt");
	std::ofstream outFile2("../Summary2.txt");

	outFile << highestPrice << std::endl << totalPrice;
	for (Plant i: plants)
	{
		outFile2 << i.latinName << ' ' << i.price << std::endl;
	}

	outFile.close();
	outFile2.close();

	return 0;
}