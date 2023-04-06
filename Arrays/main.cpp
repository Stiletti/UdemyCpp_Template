#include <iostream>
#include <cstdint>

int main()
{
    constexpr static uint32_t colums{2};
    constexpr static uint32_t rows{4};

    int matrix1[rows][colums] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    };

    for (size_t i = 0; i < rows; ++i)
    {
        int sum{0};
        for (size_t j = 0; j < colums; ++j)
        {
            sum += matrix1[i][j];
        }
        std::cout << sum << std::endl;
    }

    return 0;
}
