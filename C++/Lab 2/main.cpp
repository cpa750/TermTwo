// Session2.cpp : Defines the entry point for the console application.
// Program to test "if else"

#include <iostream>
#include "bmi.h"
#include "rps.h"

using std::cout;
using std::endl;
using std::cin;


int main()
{
    //int aInt{200};
    //float bFloat{3.6};

    /*if ( aInt < 10 )
    {
        cout << "Number is too low" << endl;
    }
    else if ( aInt == 10 )
    {
        cout << "Perfect" << endl;
    }
    else
    {
        cout << "Too high" << endl;
    }
    cout << "This is the end of the program Bye" << endl;*/

    /*if ( bFloat == 3.6 )
    {
        cout << "Found bFloat" << endl;
    }*/

    int a{2};
    int b{4};
    int c{6};
    int d{8};

    if ( (a==2) && (b<3) )
    {
        cout << "Test A" << endl;
    }
    else if ( (a!=3) && (b>2) )
    {
        cout << "Test B" << endl;
    }
    else if ( (c>7) || (d<9) )
    {
        cout << "Test C" << endl;
    }
    else if ( (c<6) || (d<=10) )
    {
        cout << "Test D" << endl;
    }
    else
    {
        cout << "Alternative statement" << endl;
    }

    bmi();
    rps1Player();

    return 0;
}
