#include <iostream>
#include "rps.h"

using std::cout;
using std::cin;
using std::endl;

int rps()
{
    int p1Choice;
    int p2Choice;

    cout <<
    "Welcome to rock paper scissors.\n Rock = 1, paper = 2, scissors = 3" <<
    endl;
    char playAgain;
    do
    {
        cout << "Player 1 choice: ";
        cin >> p1Choice;
        cout << "Player 2 choice: ";
        cin >> p2Choice;

        int result{p1Choice - p2Choice};

        switch (result)
        {
            case -1: cout << "Player 2 won" << endl;
                    break;
            case 1: cout << "Player 1 won" << endl;
                    break;
            case -2: cout << "Player 1 won" << endl;
                    break;
            case 2: cout << "Player 2 won" << endl;
                    break;
            case 0: cout << "Tie" << endl;
                    break;
        }

        cout << "Play again? (y/n): ";
        cin >> playAgain;
    }
    while (playAgain == 'y');

    return 0;
}

int rps1Player()
{
    int pChoice;
    int compChoice;

    cout <<
         "Welcome to rock paper scissors.\n Rock = 1, paper = 2, scissors = 3" <<
         endl;
    char playAgain;
    do
    {
        cout << "Player choice: ";
        cin >> pChoice;

        compChoice = rand() % 3 + 1;

        int result{pChoice - compChoice};

        switch (result)
        {
            case -1: cout << "Computer won" << endl;
                break;
            case 1: cout << "Player won" << endl;
                break;
            case -2: cout << "Player won" << endl;
                break;
            case 2: cout << "Computer won" << endl;
                break;
            case 0: cout << "Tie" << endl;
                break;
        }

        cout << "Play again? (y/n): ";
        cin >> playAgain;
    }
    while (playAgain == 'y');

    return 0;
}
