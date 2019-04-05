#include <array>
#include <iostream>
#include <string>

const std::array<std::string, 7> DAYS
        {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
        };

const std::array<std::string, 12> MONTHS
        {
    "Jan", "Feb", "Mar", "Apr",
    "May", "Jun", "Jul", "Aug",
    "Sep", "Oct", "Nov", "Dec"
        };

int getMonth();
int getDay();
void printDate(const int month, int offset, int iter);

int main()
{
    const int month {getMonth()};
    const int offset {getDay()};

    for (int i {1}; i < 16; ++i)
        printDate(month, offset, i);

    return 0;
}

int getMonth()
{
    {
        int month;
        std::cout << "Enter month (1-12): ";
        std::cin >> month;
        while ( (month < 1) || (month > 7) )
        {
            std::cout << "Month must be between 1-12, inclusive: ";
            std::cin >> month;
        }
        return month;
    }
}

int getDay()
{
    int offset;
    std::cout << "Enter day (1-7): ";
    std::cin >> offset;
    while ( (offset < 1) || (offset > 7) )
    {
        std::cout << "Day must be between 1-7, inclusive: ";
        std::cin >> offset;
    }
    return offset;
}

void printDate(const int month, const int offset, int iter)
{
    const int day {iter};
    iter += offset - 1;
    if (iter > 7) iter -= 7 * ((iter - 1) / 7);
    /*
     * This wonderful bit of code ensures that iter is always
     * between 1-7 inclusive to prevent out-of-bounds
     * indexing errors.
     */
    std::cout << DAYS.at(iter - 1) << ", " << MONTHS.at(month-1) <<
    ". " << day << std::endl;

}
