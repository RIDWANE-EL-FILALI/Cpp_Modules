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