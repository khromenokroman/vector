#include <iostream>
// #include <vector>

#include "../lib/vector.h"

int main()
{
    try
    {
        Vector<int> vec(10);
        std::cout << "size obj: " << vec.size() << std::endl;
        std::cout << "capacity obj: " << vec.capacity() << std::endl;
        vec.push_back(1111);
        std::cout << "size obj: " << vec.size() << std::endl;
        std::cout << "capacity obj: " << vec.capacity() << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << '\n';
    }

    // std::vector<int> v(10);
    // std::cout << v.size() << '\n';
    // std::cout << v.capacity() << '\n';
    // v.push_back(111);
    // std::cout << v.size() << '\n';
    // std::cout << v.capacity() << '\n';
    // std::cout << v[1] << '\n';
}