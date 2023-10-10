/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:51:06 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 14:51:08 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "\033[31mScavTrap default constructor called\033[0m" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    return ;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "\033[31mScavTrap constructor called. Name: " << name << " created\033[0m" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "\033[31mScavTrap destructor called\033[0m" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap &src) : ClapTrap()
{
    std::cout << "\033[31mScavTrap copy constructor called\033[0m" << std::endl;
    *this = src;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap & src)
{
    std::cout << "\033[31mCopy assignment operator called\033[0m" << std::endl;
    if (this != &src)
    {
        this->name = src.getName();
        this->hit_points = src.getEnergyPoints();
        this->energy_points = src.getEnergyPoints();
        this->attack_damage = src.getAttackDamage();
    }
    return (*this);
}

void ScavTrap::attack(std::string &target)
{
    if (this->hit_points == 0 || this->energy_points == 0)
    {
        std::cout << "\033[31mScavTrap " << this->name << " can't attack: its battery is depleted or it's already detroyed.\033[0m" << std::endl;
        return ;
    }
    energy_points--;
    std::cout << "\033[31mScavTrap " << this->name << " jumps on " << target << " and attacks him for " << this->attack_damage << " damage\033[0m" << std::endl;
}

void ScavTrap::guardGate(void)
{
    if (this->hit_points == 0)
        std::cout << "\033[31m" << this->name << " can't be in guard gate mode because it's already broken\033[0m" << std::endl;
    else
        std::cout << "\033[31mScavTrap " << this->getName() << " is now in gate mod\033[0m" << std::endl;
    return ;
}
