#include "Weapon.hpp"

void Weapon::setType(std::string newType)
{
    this->_type = newType;
    return ;
}

std::string const &Weapon::getType(void) const
{
    return (this->_type);
}

Weapon::Weapon(std::string type)
{
    _type = type;
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}