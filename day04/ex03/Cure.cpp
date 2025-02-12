/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:06:30 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 19:06:32 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called."<< std::endl;
	return ;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout <<  "Cure copy constructor called." << std::endl;
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called." << std::endl;
	return ;
}

Cure &	Cure::operator=(Cure const & src)
{
	std::cout << "Cure assignment operator called." << std::endl;
	this->type = src.type;
	return (*this);
}

AMateria *	Cure::clone(void) const
{
	AMateria *	cureClone = new Cure();
	return (cureClone);
}

void	Cure::use(ICharacter & target)
{
	std::cout <<  "* heals " << target.getName() << "'s wounds *"
		<< std::endl;
}