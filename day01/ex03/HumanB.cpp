#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _Weapon(NULL), _name(name) {
    return ;
}

HumanB::~HumanB(void) {
    return ;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their ";
    if (this->_Weapon->getType() == "")
        std::cout << "bare hands!";
    else
        std::cout << this->_Weapon->getType() << ".";
    std::cout << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon &aWeapon)
{
    if (aWeapon.getType().empty())
        this->_Weapon = NULL;
    else
        this->_Weapon = &aWeapon;
    return ;
}