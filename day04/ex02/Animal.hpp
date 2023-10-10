/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:40:15 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:40:16 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        virtual ~Animal(void);
        Animal(Animal &src);
        Animal &operator=(Animal &src);
        virtual void makeSound(void) const = 0;
};


#endif