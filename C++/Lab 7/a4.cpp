#include <iostream>

const float OZTOG {28.4};

int main()
{
    std::cout << "Oz.\tg" << std::endl;
    int iter {4};
    while (iter * OZTOG < 1000)
    {
        std::cout << iter << '\t' << iter *OZTOG
        << std::endl;

        iter += 4;
    }

    return 0;
}