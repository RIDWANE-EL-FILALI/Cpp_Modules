/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:51:14 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 14:51:16 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>


class ClapTrap
{
    protected:
        std::string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(ClapTrap &src);
        ClapTrap& operator=(ClapTrap &src);
        std::string getName(void);
        unsigned int getHitPoints(void);
        unsigned int getEnergyPoints(void);
        unsigned int getAttackDamage(void);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};




#endif