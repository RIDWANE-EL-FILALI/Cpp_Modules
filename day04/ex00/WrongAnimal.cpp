/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:12:22 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:12:24 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    type = "unknown animal";
    return ;
}
WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = src;
    return ;
}
WrongAnimal::WrongAnimal(std::string const & type)
{
    this->type = type;
    std::cout << "WrongAnimal Argumentative constructor called" << std::endl;
    return ;
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
    }
    return (*this);
}
std::string const &WrongAnimal::getType(void) const
{
    return (this->type);
}
void WrongAnimal::makeSound(void) const
{
    std::cout << "undifiened species roar" << std::endl;
    return ;
}