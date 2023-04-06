#include <iostream>
#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    for (int i = 0U; i < I; i++)
    {
        for (int j = 0U; j < J; j++)
        {
            if ((i + j) % 2 == 0)
            {
                std::cout << "i = " << i << ", j = " << j << " - Grade!" << std::endl;
            }
            else
            {
                std::cout << "i = " << i << ", j = " << j << " - Ungrade !" << std::endl;
            }
        }
    }
}
