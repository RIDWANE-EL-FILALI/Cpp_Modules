/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:11:55 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:26:05 by rel-fila         ###   ########.fr       */
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
        Animal(std::string &Type);
        virtual ~Animal(void);
        Animal(Animal &src);
        Animal &operator=(Animal &src);
        std::string const &getType(void) const;
        virtual void makeSound(void) const;
};


#endif