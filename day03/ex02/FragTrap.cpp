#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap constructor called. Name: " << name << " created" << std::endl;
    return ;
}

FragTrap::~FragTrap() {
    ClapTrap::~ClapTrap();
    std::cout << "FragTrap destructor called. Name: " << name << " destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap & src) : ClapTrap() {
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = src;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap & src) {
    std::cout << "Copy assignment operator for FragTrap called" << std::endl;
	if (this != &src) {
		this->name = src.getName();
		this->hit_points = src.getHitPoints();
		this->energy_points = src.getEnergyPoints();
		this->attack_damage = src.getAttackDamage();
	}
	return (*this);
}

void FragTrap::highFivesGuys() {
    std::cout << "Positive high fives request!" << std::endl;
}