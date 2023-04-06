#include <iostream>
#include <cstdint>

int main()
{
    auto arr_size = size_t{10};

    // Heap allocation of an Array
    auto *arr = new int32_t[arr_size];

    // Array initialisierung
    for (size_t i = 0; i < arr_size; ++i)
    {
        arr[i] = i;
    }

    for (size_t i = 0; i < arr_size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

    // Heap deallocation of an Array
    delete[] arr;

    return 0;
}
