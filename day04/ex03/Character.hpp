/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:06:27 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 19:06:29 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(Character const & src);
        Character(std::string const & name);
        ~Character(void);
        Character &operator=(Character const &src);
        std::string const &getName(void) const;
		void				setName(std::string const & newName);
		void				equip(AMateria * m);
		void				unequip(int	idx);
		void				use(int idx, ICharacter & target);
		void				displayInventory(void) const;
    private:
		static int const	_inventorySize = 4;
		std::string	_name;
		AMateria *	_inventory[_inventorySize];

		void	_initializeEmptyInventory(void);
		void	_deleteInventory(void);
};



#endif