#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap constructor called. Name: " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " is now in gate mod" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = src;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap &src)
{
    std::cout << "Copy assignment operator for ScavTrap called" << std::endl;
	if (this != &src) {
		this->name = src.getName();
		this->hit_points = src.getHitPoints();
		this->energy_points = src.getEnergyPoints();
		this->attack_damage = src.getAttackDamage();
	}
	return (*this);
}