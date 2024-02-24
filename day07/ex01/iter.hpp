#ifndef ITER_HPP
#define ITER_HPP

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

template <typename T, typename F>
void iter(T address, size_t length, F func)
{
    for(size_t i = 0; i < length; i++)
        func(address[i]);

    return ;
}

template <typename T>
void increment(T &num)
{
    num += 1;
    return ;
}

template <typename T>
void print_array(T &array, size_t length)
{
    for(size_t i = 0; i < length; i++)
    {
        std::cout << "[" YELLOW << array[i] << RESET "] "; 
    }
    std::cout << std::endl;
    return ;
}

#endif