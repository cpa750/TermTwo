#include <array>
#include <fstream>
#include <iostream>
#include <string>

struct Pet
{
    int age;
    std::string name;
    std::string price;
    std::string type;
};

int main()
{
    const size_t PET_SZ {2};

    Pet a, b;
    std::array<Pet, PET_SZ> pets {a, b};

    int numHamsters {0};
    std::ifstream inFile("../Pets.txt");
    for (int i {0}; i < PET_SZ; ++i)
    {
        inFile >> pets[i].age >> pets[i].name >> pets[i].price >> pets[i].type;
        std::cout << pets[i].name  << ' ' << pets[i].type << ' '
        << pets[i].age << ' ' << pets[i].price << ' ' << std::endl;
        if (pets[i].type == "hamster") ++numHamsters;
    }
    inFile.close();

    std::cout << "Number of hamsters: " << numHamsters << std::endl;

    return 0;
}
