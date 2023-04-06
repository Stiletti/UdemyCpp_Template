#include <cstdint>
#include <iostream>

/**
 * @brief Write a function which takes a player input and return it
 * @brief Write another function which takes the player input and test it its even or odd
 */

uint32_t PlayerInput()
{
    uint32_t input;
    std::cout << "Please type a number: ";
    std::cin >> input;
    return input;
}

void EvenOrOdd(uint32_t number)
{
    number % 2 == 0 ? std::cout << "Number is even !\n" : std::cout << "Number is odd !\n";
}

int main()
{
    uint32_t Input = PlayerInput();
    EvenOrOdd(Input);

    return 0;
}
