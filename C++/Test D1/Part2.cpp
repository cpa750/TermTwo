#include <array>
#include <iomanip>
#include <iostream>

const size_t MOWERMODELS {7};

struct Model
{
    int numSold;
    double price;
};

int main()
{
    std::array<Model, MOWERMODELS> models {
            30, 1089.5,
            28, 500,
            5, 3250,
            15, 1350,
            10, 1100,
            1, 4390.99,
            3, 1999.90
    };

    double totalSales {0};
    double totalDelivery {0};

    std::cout << std::setfill(' ') << std::setw(10) << "Total Sold ";
    std::cout << std::setfill(' ') << std::setw(10) << "Total Revenue ";
    std::cout << std::setfill(' ') << std::setw(10) << "Total Delivery " << std::endl;

    for (Model i: models)
    {
        int deliveryPrice;

        if (i.price < 1100)
            deliveryPrice = 45;

        else if (i.price > 2500)
            deliveryPrice = 0;

        else
            deliveryPrice = 120;

        int totalDeliveryPrice {i.numSold * deliveryPrice};
        double totalModelRevenue {i.numSold * i.price};

        totalDelivery += totalDeliveryPrice;
        totalSales += totalModelRevenue;

        std::cout << std::setfill(' ') << std::setw(10) << i.numSold;
        std::cout << std::setfill(' ') << std::setw(10) << totalModelRevenue;
        std::cout << std::setfill(' ') << std::setw(10) << totalDeliveryPrice << std::endl;
    }

    std::cout << "Total sales: " << totalSales << " Total delivery: " << totalDelivery << std::endl;

    return 0;
}
