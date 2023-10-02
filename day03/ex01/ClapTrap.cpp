#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "Default";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    return ;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "The clapTrap with the name " << this->name << " was destroyed" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Class with the name " << name << " constructed" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    return ;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->name = src.getName();
        this->hit_points = src.getHitPoints();
        this->energy_points = src.getEnergyPoints();
        this->attack_damage = src.getAttackDamage();
    }
    return (*this);
}

/* setters and getters */
std::string ClapTrap::getName(void)
{
    return (this->name);
}
unsigned int ClapTrap::getHitPoints(void)
{
    return (this->hit_points);
}
unsigned int ClapTrap::getEnergyPoints(void)
{
    return (this->energy_points);
}
unsigned int ClapTrap::getAttackDamage(void)
{
    return (this->attack_damage);
}


void ClapTrap::attack(const std::string& target)
{
    if (this->hit_points == 0)
    {
        std::cout << "ClapTrap" << this->name << " can't attack: it's destroyed." << std::endl;
        return ;
    }
    if (this->energy_points == 0)
    {
        std::cout << "ClapTrap" << this->name << " has no energy left so it cannot do anything" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << " and caused " << this->attack_damage << " damage!" << std::endl;
    this->energy_points--;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << "ClapTrap " << this->name << " can't take no more damage and it's broken" << std::endl;
        return ;
    }
    if (((int)this->hit_points - (int)amount) <= 0)
    {
        this->hit_points = 0;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " damage, and can't take no more" << std::endl;
    }
    else
    {
        this->hit_points -= amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!, and stands still" << std::endl;
    }
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << "ClapTrap " << this->name << " it's already beyond repair" << std::endl;
        return ;
    }
    if (this->energy_points == 0)
    {
        std::cout << "ClapTrap " << this->name << " it hase no energy left to repair itself" << std::endl;
        return ;
    }
    this->energy_points--;
    this->hit_points += amount;
    if (this->hit_points >= 10)
        this->hit_points = 10;
    std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << "." << std::endl;
    return ;
}




