#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*int main()
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
}