#include "Zombie.hpp"

void Zombie::announce (void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie::Zombie(std::string name) {
    _name = name;
    return ;
}

Zombie::~Zombie(void) {
    std::cout << _name << ": distructed" << std::endl;
    return ;
}