#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl hihi;

        std::string input;
        input = av[1];
        for(int i = 0; input[i]; i++)
            input[i] = std::toupper(input[i]);
        hihi.complain(input);
    }
    else
        std::cerr << "Usage: " << av[0] << "level prefered" << std::endl;
    return (0);
}