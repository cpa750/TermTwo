#include "hquestion5.h"

using std::cout;
using std::endl;

void q5::limiting(int arr[], int arrSz, int limit)
{
    for (int i = 0; i < arrSz; ++i)
    {
        if (arr[i] > limit) arr[i] = limit;
    }
}

void q5::displayBig(int arr[], int arrSz, int limit)
{
    for (int i = 0; i < arrSz; ++i)
    {
        if (arr[i] > limit)
        {
            cout << arr[i] << endl;
        }
    }
}

void q5::funcToCallFromMain()
{
    const int LIMIT = 66;
    const int ARRAY_SIZE = 100;
    int arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        arr[i] = rand() % 100;
    }

    q5::displayBig(arr, ARRAY_SIZE, LIMIT);
    q5::limiting(arr, ARRAY_SIZE, LIMIT);
    q5::limiting(arr, ARRAY_SIZE, LIMIT);
}
