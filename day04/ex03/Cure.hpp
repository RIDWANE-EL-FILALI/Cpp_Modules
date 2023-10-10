/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:06:33 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 19:06:35 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"


class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(Cure const &src);
        ~Cure(void);
        Cure &operator=(Cure const &src);
        AMateria *clone(void) const;
        void use(ICharacter &target);
};




#endif