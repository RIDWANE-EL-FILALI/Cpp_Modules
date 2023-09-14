#include "Zombie.hpp"

void Zombie::announce (void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie::Zombie(void) {
    return ;
}

Zombie::~Zombie(void) {
    std::cout << _name << ": distructed" << std::endl;
    return ;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
    return ;
}