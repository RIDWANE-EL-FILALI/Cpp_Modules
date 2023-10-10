/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:40:27 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:40:28 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), brain(new Brain())
{
    std::cout << "Default contructor for class Cat called" << std::endl;
    this->type = "Cat";
    return ;
}
Cat::Cat(Cat const &src) : Animal(), brain(NULL)
{
    std::cout << "Copy constructor for class Cat called" << std::endl;
    *this = src;
    return ;
}
Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
    return ;
}
Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Cat coppy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        if (this->brain != NULL)
            delete (this->brain);
        this->brain = new Brain(*src.brain);
    }
    return (*this);
}

Brain *Cat::getBrain(void) const
{
    return (this->brain);
}

void Cat::makeSound(void) const
{
    std::cout << this->type << " : Meowwwww" << std::endl;
    return ;
}