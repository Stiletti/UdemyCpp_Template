#include "Game.h"
#include <cstdint>
#include <iostream>
#include <cstdlib>


uint32_t PlayerGuess()
{
    uint32_t Guess;
    std::cout << "\nPlease type a number between 1 & 10: ";
    std::cin >> Guess;
    while (Guess > 10)
    {
        std::cout << "\nUnrecognized input, please choose a number between 1 & 10: ";
        uint32_t NewGuess;
        std::cin >> NewGuess;
        Guess = NewGuess;
    }
    return Guess;
}

uint32_t GenerateRandNumber()
{
    // create seed
    srand((unsigned)time(NULL));
    // create rand number
    uint32_t RandNumber = 1 + (rand() % 10);
    return RandNumber;
}

bool CompareValues(uint32_t Guess, uint32_t RandNum)
{
    if (Guess == RandNum)
    {
        std::cout << "\nCongratulations, well played !\n";
        return true;
    }

    if (Guess < RandNum)
    {
        std::cout << "Number was higher...\n";
        return false;
    }
    else
    {
        std::cout << "Number was lower...\n";
        return false;
    }
}

void game()
{
    uint32_t Counter = 0U;
    uint32_t Limit = 4U;
    uint32_t RandNum = GenerateRandNumber();
    bool YouWin = false;

    while (!YouWin && Limit > 0)
    {
        uint32_t Guess = PlayerGuess();
        YouWin = CompareValues(Guess, RandNum);
        if (YouWin)
        {
            Counter++;
            break;
        }
        else
        {
            Counter++;
            Limit--;
            std::cout << "Tries left: " << Limit << std::endl;
        }
    }

    std::cout << "Number of guesses: " << Counter << std::endl;
    Counter = 0U;

    if (Limit > 0)
    {
        std::cout << "YOU WIN !\n";
    }
    else
    {
        std::cout << "YOU LOSE !\n";
    }

    std::cout << "\nSee you next time :)\n";
}
