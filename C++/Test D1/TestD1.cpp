#include <iostream>
#include <sstream>

const int MOWERMODELS = 7;


int main()
{
	int NumSold[MOWERMODELS] = { 30, 28, 5, 15, 10, 1, 3 };
	double MowerPrice[MOWERMODELS] = { 1089.50, 500.0, 3250.0, 1350.0, 1100.0, 4390.99, 1999.90};

	double deliveryPrice;

	for (int i{0}; i < MOWERMODELS; ++i)
    {
	    if (MowerPrice[i] < 1100.00)
            deliveryPrice = 45.0 * NumSold[i];
	    else if (MowerPrice[i] > 2500.00)
            deliveryPrice = 0;
	    else deliveryPrice = 120.0 * NumSold[i];

	    std::cout << "Total Sold: " << NumSold[i] << " Total sales amount: "
	    << NumSold[i] * MowerPrice[i] << " Total Delivery: " << deliveryPrice << std::endl;
    }
	
	return 0;
}


