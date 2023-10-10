/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:06:54 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 19:06:56 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_H
# define MATERIASOURCE_CLASS_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);

		MateriaSource &	operator=(MateriaSource const & src);

		void		learnMateria(AMateria * m);
		AMateria *	createMateria(std::string const & type);
		void		displayKnownRecipes(void);

	private:
		static int const	_maxRecipes = 4;
		AMateria *	_recipes[_maxRecipes];

		void	_initializeEmptyRecipes(void);
		void	_deleteRecipes(void);
};

#endif