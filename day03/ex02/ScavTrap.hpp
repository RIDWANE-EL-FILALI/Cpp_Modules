#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string &name);
        ~ScavTrap(void);
        void guardGate(void);
        ScavTrap(ScavTrap &src);
        ScavTrap &operator=(ScavTrap &src);
};




#endif