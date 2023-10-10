/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:11:58 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:12:00 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Default contructor for class Cat called" << std::endl;
    this->type = "Cat";
    return ;
}
Cat::Cat(Cat const &src) : Animal()
{
    std::cout << "Copy constructor for class Cat called" << std::endl;
    *this = src;
    return ;
}
Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    return ;
}
Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Cat coppy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}
void Cat::makeSound(void) const
{
    std::cout << this->type << " : Meowwwww" << std::endl;
    return ;
}