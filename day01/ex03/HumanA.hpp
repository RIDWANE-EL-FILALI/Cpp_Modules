#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {
    private:
        Weapon const &_weapon;
        std::string _name;
    public:
        HumanA(std::string const name, Weapon const &aweapon);
        ~HumanA(void);
        void attack(void);
};


#endif