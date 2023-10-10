/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:51:35 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 14:51:36 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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