#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
    private:
        Weapon *_Weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon &aWeapon);
};


#endif