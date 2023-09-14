#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon const &aweapon): _weapon(aweapon), _name(name) {
    return ;
}

HumanA::~HumanA(void) {
    return ;
}

void HumanA::attack(void)
{

    std::cout << this->_name << " attacks with their ";
    if (this->_weapon.getType() == "")
        std::cout << "bare hands!";
    else
        std::cout << this->_weapon.getType() << ".";
    std::cout << std::endl;
    return ;
}