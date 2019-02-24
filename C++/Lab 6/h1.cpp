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

std::vector<std::string> splitStringByChar(const std::string& s, char c)
{
    std::vector<std::string> substrings;
    std::string substring;
    for (auto i: s) // Looping over every char in the string
    {
        if (i != c) substring.push_back(i);
        else
        {
            substrings.push_back(substring);
            substring = "";
        }
    }
    if (substring != "") substrings.push_back(substring);
    /*
     * Must push back subtring one last time.
     * This is to ensure all substrings are returned if
     * the line does not end in a space.
     */
    if (substrings.empty()) substrings.push_back(s);
    // If there are no delimiting chars return the whole string
    return substrings;
}

int main()
{
    std::vector<Paint> paint;
    /*
     * Using std::vector here bc it's generally not a good
     * idea to use c-style arrays over standard containers
     * unless there's a __good reason to__
     */
    double totalValue {0};

    std::ifstream inFile("../paint.txt");
    std::string line;
    while (getline(inFile, line))
    {
        std::vector<std::string> subs = splitStringByChar(line, ' ');
        Paint p
                {subs.at(0),
                 stod(subs.at(1)),
                 stoi(subs.at(2)),
                 stoi(subs.at(3)),
                 subs.at(4)};

        paint.push_back(p);
        totalValue += p.price * p.stock;

        std::cout << p.size << ' ' << p.color << ' ' << p.supplier << ' '
                  << p.price << ' ' << p.stock << std::endl;
    }

    std::cout << "Total stock value: $" << totalValue << std::endl;

    std::string action;
    std::cout << "add or remove: ";
    std::cin >> action;
    if (action == "add")
    {
        Paint p;
        std::cout << "Color: ";
        std::cin >> p.color;
        std::cout << "Price: $";
        std::cin >> p.price;
        std::cout << "Size: ";
        std::cin >> p.size;
        std::cout << "Stock: ";
        std::cin >> p.stock;
        std::cout << "Supplier: ";
        std::cin >> p.supplier;
    }
    else if (action == "remove")
    {
        std::string toRemove;
        std::cout << "Color to remove: ";
        std::cin >> toRemove;

        for (int i {0}; i < paint.size(); ++i)
        {
            if (toRemove == paint.at(i).color)
                paint.erase(paint.begin()+i);
            /*
             * Weird math here b/c erase takes an
             * iterator, not an integer as an argument
             */
        }
    }

    return 0;
}
