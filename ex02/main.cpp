#include "Array.hpp"
#include <iostream>

int main()
{
    int *a = new int();
    std::cout << "a == " << a[0] << std::endl;

    std::cout << "______int arr, default parameters______" << std::endl;
    Array <int>b;
    try
    {
        std::cout << b.size() << std::endl;
        std::cout << b[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "______float arr, custom parameters______" << std::endl;
    Array<float>c(5);
    try
    {
        std::cout << c.size() << std::endl;
        std::cout << c[0] << std::endl;
        std::cout << c[1] << std::endl;
        std::cout << c[2] << std::endl;
        std::cout << c[3] << std::endl;
        std::cout << c[4] << std::endl;
        std::cout << c[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "______char arr, custom parameters______" << std::endl;
    Array<char>d(5);
    try
    {
        std::cout << d.size() << std::endl;
        std::cout << d[0] << std::endl;
        std::cout << d[1] << std::endl;
        std::cout << d[2] << std::endl;
        std::cout << d[3] << std::endl;
        std::cout << d[4] << std::endl;
        std::cout << d[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "______double arr, custom parameters______" << std::endl;
    Array<const double>e(5);
    try
    {
        std::cout << e.size() << std::endl;
        // e[0] = 0;
        std::cout << e[0] << std::endl;
        // e[1] = 1;
        std::cout << e[1] << std::endl;
        // e[2] = 2;
        std::cout << e[2] << std::endl;
        // e[3] = 3;
        std::cout << e[3] << std::endl;
        // e[4] = 4;
        std::cout << e[4] << std::endl;
        std::cout << e[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}