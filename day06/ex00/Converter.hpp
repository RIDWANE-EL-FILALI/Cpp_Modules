#ifndef CONVERTER_HPP
#define CONVERTER_HPP

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
#include <cstring>
#include <climits>
#include <cmath>

class ScalarConverter {
    public:
        ~ScalarConverter();
        static void convert(const std::string input);

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& src);
        ScalarConverter &operator=(const ScalarConverter& src);
};


#endif