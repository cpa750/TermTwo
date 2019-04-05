#include <stdio>

double cvtFromEURToGBP(double conversionRate, double EUR);

int main()
{
    double conversionRate;
    double EUR {1.0};

    std::cout << "Enter conversion rate from EUR to GBP: ";
    std::cin >> conversionRate;

    pounds = cvtFromEURToGBP(conversionRate, EUR);

    while (pounds < 10)
    {
        std::cout << "Pounds: " << pounds << std::endl;
        pounds = cvtFromEURToGBP(conversionRate, ++EUR);
    }

    return 0;
}

double cvtFromEURToGBP(double conversionRate, double EUR)
{
    double GBP;

    GBP = EUR * conversionRate;

    return GBP
}
