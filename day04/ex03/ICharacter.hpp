/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:06:42 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 19:06:43 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP


#include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter(void) {};
		virtual std::string const & getName(void) const = 0;
		virtual void equip(AMateria * m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};



#endif