#include "Converter.hpp"

int main(int ac, char **av)
{

    if (ac == 1)
    {
        std::cout << RED "Error : no parameters have been entered\n" << GREEN "Usage: <program> <string>" RESET << std::endl;
    }
    else
    {
        std::cout << YELLOW "-----> Iniciating the conversion between types :" RESET << std::endl;
        ScalarConverter::convert(av[1]);
    }
    return (0);
}