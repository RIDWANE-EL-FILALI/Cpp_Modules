#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#define RESET         "\033[0m"
#define BLACK          "\033[30m"
#define RED            "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW         "\033[33m"
#define BLUE           "\033[34m"
#define MAGENTA        "\033[35m"
#define CYAN           "\033[36m"
#define WHITE          "\033[37m"

int isNumber(const std::string& s);
int calculateRPN(const std::string& expression);



#endif