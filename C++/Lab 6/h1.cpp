#include <fstream>
#include <iostream>
#include <string>
#include <vector>

struct Paint
{
    std::string color;
    double price;
    int size;
    int stock;
    std::string supplier;
};

int main()
{
    std::vector<Paint> paint;
    /*
     * Using std::vector here bc it's generally not a good
     * idea to use c-style arrays over standard containers
     * unless there's a __good reason to__
     */
    std::ifstream inFile("../paint.txt");
    double totalValue {0};
    int paintNum;
    inFile >> paintNum;
    std::string a, b;
    int c, d;
    while (inFile >> a >> c >> d >> b)
    {
        Paint tmp
                {

                };
        std::cout << tmp.size << ' ' << tmp.color << ' ' << tmp.supplier << ' '
        << tmp.size << ' ' << tmp.stock << std::endl;
        totalValue += tmp.stock * tmp.price;

        paint.push_back(tmp);
    }

    std::cout << "Total stock value: $" << totalValue << std::endl;

    return 0;
}
