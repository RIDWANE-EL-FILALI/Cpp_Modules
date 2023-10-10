/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:12:30 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:12:31 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = src;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void WrongCat::makeScound(void) const
{
    std::cout << this->type << " : Meoow" << std::endl;
    return ;
}