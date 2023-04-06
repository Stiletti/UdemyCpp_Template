#include <iostream>
#include <cstdint>

int main()
{
    uint32_t START = 0U;
    uint32_t GOAL = 9U;
    uint32_t FIELD = 10U;
    uint32_t player = START;
    char LEFT = 'a';
    char RIGHT = 'd';

    std::cout << "Movement Game\n";
    std::cout << "+++++++++++++++ \n";

    std::cout << "Make your move: ";
    char MOVE;


    while (true)
    {
        std::cin >> MOVE;
        if (player == GOAL)
        {
            std::cout << "Gratulation !\n";
            break;
        }

        if (LEFT == MOVE && player > 0)
        {
            std::cout << "Player moved to the left !\n";
            player--;
        }
        else if (RIGHT == MOVE)
        {
            std::cout << "Player moved to the right !\n";
            player++;
        }
        else
        {
            std::cout << "Unrecognized move !\n";
        }

        for (uint32_t i = 0; i < FIELD; i++)
        {
            if (i == player)
            {
                std::cout << "P";
            }

            if (i == GOAL || i == START)
            {
                std::cout << "|";
            }
            else
            {
                std::cout << ".";
            }
        }
    }

    return 0;
}
