/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:51:17 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 14:51:19 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "\033[33mFragTrap default constructor called\033[0m" << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    return ;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "\033[33mFragTrap constructor called. Name: " << name << " created\033[0m" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "\033[33mFragTrap destructor called\033[0m" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap &src) : ClapTrap()
{
    std::cout << "\033[33mFragTrap copy constructor called\033[0m" << std::endl;
    *this = src;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap & src)
{
    std::cout << "\033[33mCopy assignment operator of FragTrap called\033[0m" << std::endl;
    if (this != &src)
    {
        this->name = src.getName();
        this->hit_points = src.getEnergyPoints();
        this->energy_points = src.getEnergyPoints();
        this->attack_damage = src.getAttackDamage();
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (hit_points == 0 || energy_points == 0)
        std::cout << "\033[33m" << this->name << " fingerless and injured hight-five\033[0m" << std::endl;
    else
        std::cout << "\033[33m" << this->name << " high-fives the other players with a perfectly fine hand\033[0m" << std::endl;
    return ;
}

