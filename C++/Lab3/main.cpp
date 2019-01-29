#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/* This is the code for exercise 1
int main()
{
    const int ARRAY_SIZE = 10;
	int pollution_level[ARRAY_SIZE];
    double average = 0;
	int counter = 0;

	while (counter < ARRAY_SIZE)
    {

		int dailyPollution;

        do
        {
            cout<<"Enter pollution level for day "<< counter <<" range (1-100): ";
            cin >> dailyPollution;
        }
        while ((dailyPollution >= 1) || (dailyPollution <= 100));
        pollution_level[counter] = dailyPollution;

        average = average + pollution_level[counter];

		++counter;
	}
	cout << endl;
	cout << "The average pollution level over those 6 days was:" << average/ARRAY_SIZE << endl;

    int ARRAY_SIZE = 10;
    float total = 0;
    float mArray[10] { 23.32, 45.54, 76.2, 23.87, 1.002, 54.065, 22.236, 545.4, 9.81, 21.3 };

    int largestIndex = -1;
    float largestVal = 0;
    int lowestIndex = -1;
    float smallestVal = 0;
    for (int i=0; i<ARRAY_SIZE; ++i)
    {
        if (i == 0)
        {
            largestIndex, lowestIndex = i;
            largestVal, smallestVal = mArray[i];
        }
        else if (mArray[i] > largestVal)
        {
            largestIndex = i;
            largestVal = mArray[i];
        }
        else if (mArray[i] < smallestVal)
        {
            lowestIndex = i;
            smallestVal = mArray[i];
        }
    }

    cout << "Highest value: " << largestVal << ", at index: " << largestIndex << endl;
    cout << "Lowest value: " << smallestVal << ", at index: " << lowestIndex << endl;


	return 0;
}*/

/* This is the code for Execise 2
const int MAXDAYS=6;

// function declaration
int GetValidPollution(int Day);

int main()
{
    int pollution_level[MAXDAYS];
    double average=0.0;
    int counter =0;

    while (counter<MAXDAYS)
    {
        pollution_level[counter] = GetValidPollution(counter);
        average = average + pollution_level[counter];
        counter++;
    }

    cout<<endl;
    cout<< "The average pollution level over those "<<MAXDAYS<<" days was : "<<average/MAXDAYS<<endl;

    return 0;
}

//function definition
int GetValidPollution(int Day)
{
    int temp;
    do
    {
        cout<<"Enter pollution level for day " << Day+1 <<" range (1-100): ";
        cin >> temp;
    }
    while ((temp < 1) || (temp > 100));
    return temp;
}*/

struct Simple
{
    int Element1;
    double Element2;
};

struct Patient {
    double height;
    double weight;
    int age;
    bool isMale;
};

double PointlessFunction(Simple ArbitraryParameter);

int main()
{
    /*const int ARR_SZ = 4;
    Simple testArray[ARR_SZ];
    for (int i = 0; i < ARR_SZ; ++i)
    {
        Simple simple { i*2, i*2.5 };
        testArray[i] = simple;
    }

    for (auto i : testArray)
    {
        cout << "Output of pointless function: " << PointlessFunction(i);
    }*/

    const int ARR_SZ = 3;
    Patient pArray[ARR_SZ];
    for (int i = 0; i < ARR_SZ; ++i)
    {
        Patient patient = pArray[i];
        cout << "Patient " << i << "age: ";
        cin >> patient.age;
        cout << "Height (m): ";
        cin >> patient.height;
        cout << "Weight (kg): ";
        cin >> patient.weight;
        cout << "Male (y/n): ";
        char temp;
        cin >> temp;
        patient.isMale = temp=='y';
    }

    for (auto i: pArray)
    {
        cout << "BMI: " << i.weight / (i.height*i.height) << endl;
        cout << "Age: " << i.age;
        cout << "Sex: " << (i.isMale ? "Male" : "Female") << endl;
    }

    return 0;
}

double PointlessFunction(Simple ArbitraryParameter)
{
    return (ArbitraryParameter.Element1+ArbitraryParameter.Element2);
}
