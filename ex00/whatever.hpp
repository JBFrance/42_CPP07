#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <class T>
void    swap(T& a, T& b)
{
    T temp = b;

    b = a;
    a = temp;
};

template <class T>
T min(T a, T b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
    else
        return b;
};

template <class T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else if ( b > a)
        return b;
    else
        return b;
};

#endif