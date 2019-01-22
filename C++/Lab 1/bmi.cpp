#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
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
        cout << "BMI is a little high!" << endl;
    }
    else
    {
        cout << "Good BMI!" << endl;
    }

    return 0;
}
