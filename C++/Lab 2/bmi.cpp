#include <iostream>
#include "bmi.h"

using std::cin;
using std::cout;
using std::endl;

int bmi()
{
    double bmi;
    double height;
    double weight;

    cout << "BMI Calculator" << endl;

    cout << "Height (m): ";
    cin >> height;

    cout << "Weight (kg): ";
    cin >> weight;
    cout << endl;

    // BMI = weight/height^2
    bmi = weight / (height*height);
    cout << "BMI " << bmi << endl;

    if (bmi > 25)
    {
        cout << "Overweight" << endl;
    }
    else if (bmi < 12)
    {
        cout << "Underweight" << endl;
    }
    else
    {
        cout << "Practically perfect!" << endl;
    }

    return 0;
}