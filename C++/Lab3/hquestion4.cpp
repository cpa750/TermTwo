#include "hquestion4.h"

double getMean(int arr[], int arrSz)
{
    double mean = 0;

    for (int i = 0; i < arrSz; ++i)
    {
        mean += arr[i];
    }

    mean /= arrSz;
    return mean;
}
