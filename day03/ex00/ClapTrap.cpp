#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "default constructor called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "destructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "constructor with string as argument called" << std::endl;
    this->name = name;
    return ;
}

ClapTrap::ClapTrap(ClapTrap &const src)
{
    std::cout << "copy constructor called" << std::endl;
    *this = src;
    return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &src)
{
    if (this != other)
        name = 
}





