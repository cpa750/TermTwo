#include <array>
#include <iomanip>
#include <iostream>

const int NUMFOODWEEKS {4};
const std::array<char, NUMFOODWEEKS> FOODWEEKS {'A', 'B', 'C', 'D'};

int main()
{
    for (int i {0}; i < 18; ++i)
    {
        std::cout << "Week " << i + 1 << ": " <<
        "Food " << FOODWEEKS.at(i % NUMFOODWEEKS);

        std::cout << std::setfill(' ') << std::setw(10) <<
        "Week " << i + 19 << ": " << "Food " <<
        FOODWEEKS.at( (i+18) % NUMFOODWEEKS ) << std::endl;
    }
    return 0;
}
