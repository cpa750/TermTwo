#include <iostream>
#include <random>
#include <ctime>

int getUserGuess();

int main()
{
    std::srand(std::time(NULL));

    bool correct {false};
    int guesses {0};
    const int num {rand() % 10};
    // Getting a random number from 0 to 10
    // TODO: seed random number

    while ( (guesses < 3) && !correct )
    {
        int guess {getUserGuess()};

        if (guess == num)
        {
            std::cout << "Correct!" << std::endl;
            correct = true;
        }
        else if (guess < num)
            std::cout << "Too low" << std::endl;
        else if (guess > num)
            std::cout << "Too high" << std::endl;

        ++guesses;
    }

    return 0;
}

int getUserGuess()
{
    int guess;
    std::cout << "Guess a number from 0 to 10: ";
    std::cin >> guess;

    while ( (guess < 1) || (guess > 10) )
    {
        std::cout << "Please enter an integer from 0 to 10: ";
        std::cin >> guess;
    }

    return guess;
}
