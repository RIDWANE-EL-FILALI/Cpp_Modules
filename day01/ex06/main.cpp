#include "Harl.hpp"

int main()
{
    Harl hihi;

    std::string input;
    for(int i = 0; input[i]; i++)
        input[i] = std::toupper(input[i]);
    hihi.complain(input);
    return (0);
}