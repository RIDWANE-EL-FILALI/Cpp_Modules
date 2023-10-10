/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:40:21 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:40:22 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
    return ;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

Brain &Brain::operator=(Brain const &src)
{
    std::cout << "Brain Copy assignment operator" << std::endl;
    for(int i = 0; i < this->nb_ideas; i++)
        this->ideas[i] = src.ideas[i];
    return (*this);
}

std::string const &Brain::getIdea(int index) const
{
    if (index < 0)
        index = 0;
    return (this->ideas[index % (nb_ideas - 1)]);
}

void Brain::setIdea(int index, std::string const &idea)
{
    if (index < 0)
        return ;
    this->ideas[index % (nb_ideas - 1)] = idea;
    return ;
}
