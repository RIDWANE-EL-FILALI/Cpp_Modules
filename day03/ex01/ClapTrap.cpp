#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "\033[32mDefault constructor called\033[0m" << std::endl;
    this->name = "Default";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    return ;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "\033[32mThe clapTrap with the name " << this->name << " was destroyed\033[0m" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "\033[32mClass with the name " << name << " constructed\033[0m" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    return ;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
    std::cout << "\033[32mCopy constructor called\033[0m" << std::endl;
    *this = src;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap &src)
{
    std::cout << "\033[32mCopy assignment operator called\033[0m" << std::endl;
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
        std::cout << "\033[32mClapTrap" << this->name << " can't attack: it's destroyed.\033[0m" << std::endl;
        return ;
    }
    if (this->energy_points == 0)
    {
        std::cout << "\033[32mClapTrap" << this->name << " has no energy left so it cannot do anything\033[0m" << std::endl;
        return ;
    }
    std::cout << "\033[32mClapTrap " << this->name << " attacks " << target << " and caused " << this->attack_damage << " damage!\033[0m" << std::endl;
    this->energy_points--;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << "\033[32mClapTrap " << this->name << " can't take no more damage and it's broken\033[0m" << std::endl;
        return ;
    }
    if (((int)this->hit_points - (int)amount) <= 0)
    {
        this->hit_points = 0;
        std::cout << "\033[32mClapTrap " << this->name << " takes " << amount << " damage, and can't take no more\033[0m" << std::endl;
    }
    else
    {
        this->hit_points -= amount;
        std::cout << "\033[32mClapTrap " << this->name << " takes " << amount << " damage!, and stands still\033[0m" << std::endl;
    }
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points == 0)
    {
        std::cout << "\033[32mClapTrap " << this->name << " it's already beyond repair\033[0m" << std::endl;
        return ;
    }
    if (this->energy_points == 0)
    {
        std::cout << "\033[32mClapTrap " << this->name << " it hase no energy left to repair itself\033[0m" << std::endl;
        return ;
    }
    this->energy_points--;
    this->hit_points += amount;
    if (this->hit_points >= 10)
        this->hit_points = 10;
    std::cout << "\033[32mClapTrap " << this->name << " repairs itself for " << amount << ".\033[0m" << std::endl;
    return ;
}




