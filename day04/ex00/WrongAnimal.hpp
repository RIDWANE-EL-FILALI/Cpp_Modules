/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:12:26 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:12:28 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const & src);
        WrongAnimal(std::string const & type);
        virtual ~WrongAnimal(void);
        WrongAnimal &operator=(WrongAnimal const &src);
        std::string const &getType(void) const;
        void makeSound(void) const;
};




#endif