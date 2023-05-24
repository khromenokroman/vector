#include <iostream>

#include "../lib/vector.h"

int main()
{
    try
    {
        Vector vec(100);
        std::cout << "size obj: " << vec.size() << std::endl;
        std::cout << "capacity obj: " << vec.capacity() << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << '\n';
    }
}