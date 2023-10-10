/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:12:36 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:12:40 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    type = "unknown";
    std::cout << "Default constructer for class Animal called" << std::endl;
    return ;
}
Animal::Animal(std::string &type)
{
    this->type = type;
    std::cout << "Default constructor with type argument of class animal called" << std::endl;
    return ;
}

Animal::~Animal(void)
{
    std::cout << "Destructor for class Animal called" << std::endl;
    return ;
}
Animal::Animal(Animal &src)
{
    std::cout << "Copy constructor for Animal class colled" << std::endl;
    *this = src;
    return ;
}

Animal &Animal::operator=(Animal &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

std::string const &Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "undefined roar of an animal" << std::endl;
    return ;
}