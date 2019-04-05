#include <iostream>

int main()
{
    int highest;
    int tmp;
    std::cout << "Enter a number (0 to quit): ";
    std::cin >> tmp;
    highest = tmp;

    while (tmp != 0)
    {
        std::cout << "Enter a number (0 to quit): ";
        std::cin >> tmp;
        if (tmp > highest) highest = tmp;
    }
    std::cout << "Highest number: " << highest;

    return 0;
}