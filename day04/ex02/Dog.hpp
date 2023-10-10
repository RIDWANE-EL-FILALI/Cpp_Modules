/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:40:40 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:40:41 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &src);
        ~Dog(void);
        Dog &operator=(Dog const &src);
        void makeSound(void) const;
        Brain *getBrain(void) const;
    private:
        Brain *brain;
};




#endif