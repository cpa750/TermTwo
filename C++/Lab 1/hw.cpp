#include <iostream>
#define PI 3.1416

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Area of a circle calculator" << endl;

    double radius;    
    cout << "Radius: ";
    cin >> radius;

    // Area of a circle = pi * r^2
    int area = PI*radius*radius;
    cout << "Area: " << area << endl;

    return 0;
}

