/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:12:01 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:12:02 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &src);
        ~Cat(void);
        Cat &operator=(Cat const &src);
        void makeSound(void) const;
};



#endif