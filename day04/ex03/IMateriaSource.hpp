/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:06:44 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 19:06:46 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) {}

		virtual void		learnMateria(AMateria * m) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif