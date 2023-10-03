#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string &name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap &src);
        ScavTrap &operator=(ScavTrap &src);
        void attack(std::string &target);
        void guardGate(void);
};




#endif