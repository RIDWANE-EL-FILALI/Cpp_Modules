#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return ;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    return ;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

Harl::Harl(void)
{
    return ;
}

Harl::~Harl(void)
{
    return ;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int i = -1;
    for (int j = 0;j< 4;j++)
    {
        if (levels[j] == level)
        {
            i = j;
            break ;
        }
    }
    switch (i) {
        case 0:
            std::cout << "[ DEBUG ]" <<std::endl;
            debug();
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" <<std::endl;
            info();
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" <<std::endl;
            warning();
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" <<std::endl;
            error();
            std::cout << std::endl;
            break ;
        default:
            std::cout << "you didn't enter one of the allowed levels !!" << std::endl;
            break;
    }
}
