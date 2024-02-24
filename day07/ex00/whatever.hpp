#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#define RESET         "\033[0m"
#define BLACK          "\033[30m"
#define RED            "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW         "\033[33m"
#define BLUE           "\033[34m"
#define MAGENTA        "\033[35m"
#define CYAN           "\033[36m"
#define WHITE          "\033[37m"
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T   tmp = a;

    a = b;
    b = tmp;
    return ;
}

template <typename T>
T &min(T &a, T &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T &max(T &a, T &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif