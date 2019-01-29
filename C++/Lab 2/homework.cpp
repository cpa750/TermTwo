#include "homework.h"

using std::cout;
using std::cin;
using std::endl;

const double CONV_FACTOR{28.34952};

void problem1()
{
    for (int i=10; i>=0; --i)
    {
        std::cout << i << std::endl;
        sleep(1);
    }
}

double getGrams(const double& ounces);

void problem2version1()
{
    double ounces;
    cout << "Enter ounces: ";
    cin >> ounces;

    cout << "Grams: " << getGrams(ounces) << endl;
}

void problem2version2()
{
    for (int i=0; i<10; ++i)
    {
        double j{static_cast<double>(i)};
        double grams{getGrams(j)};
        cout << i+1 << ": " << grams << endl;
    }
}

void problem3()
{
    double ppd;
    cout << "Enter Pounds per Dollar: ";
    cin >> ppd;

    int dollar;
    double pound;
    do
    {
        pound = dollar * ppd;
        cout << "$" << dollar << ": " << "£" << pound;
    }
    while (pound<=10);
}

void problem4()
{
    int val;
    do
    {
        cout << "Enter any value: ";
        cin >> val;

        for (int i=1; i>=10; ++i)
        {
            cout << "7*" << i << " = " << val * i << endl;
        }
    }
    while (val<0);
}

void problem5()
{
    int age{0};
    while ( (age<17) || (age>41) )
    {
        cout << "Enter a valid age: ";
        cin >> age;
    }

    for (int i=10; i<51; i=i+10)
    {
        cout << "Age in " << i << " years:" << age + i << endl;
    }
}

double getGrams(const double& ounces)
{
    double grams{ounces * CONV_FACTOR};
    return grams;
}
