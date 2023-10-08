#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called."  << std::endl;
	this->_initializeEmptyRecipes();
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "MateriaSource copy constructor called." << std::endl;
	this->_initializeEmptyRecipes();
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called." << std::endl;
	this->_deleteRecipes();
	return ;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & src)
{
	std::cout <<"MateriaSource assignment operator overload called."
		 << std::endl;
	this->_deleteRecipes();
	for (int i = 0; i < this->_maxRecipes; i++)
	{
		if (src._recipes[i] != NULL)
			this->_recipes[i] = src._recipes[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria * materia)
{
	if (!materia)
	{
		std::cout << "MateriaSource was not provided with a materia to learn."
			 << std::endl;
		return ;
	}
	for (int i = 0; i < this->_maxRecipes; i++)
	{
		if (this->_recipes[i] == NULL)
		{
			this->_recipes[i] = materia;
			std::cout << "MateriaSource learned the " << materia->getType()
				<< " materia recipe." << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource can't learn any more materia."  << std::endl;
	delete materia;
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_maxRecipes; i++)
	{
		if (this->_recipes[i]
			&& this->_recipes[i]->getType() == type)
		{
			std::cout <<  "MateriaSource creating " << type
				<< " materia." << std::endl;
			return (this->_recipes[i]->clone());
		}
	}
	std::cout << "MateriaSource does not know the type \""
		<< type << "\"."  << std::endl;
	return (NULL);
}

void	MateriaSource::_initializeEmptyRecipes(void)
{
	for (int i = 0; i < this->_maxRecipes; i++)
		this->_recipes[i] = NULL;
	return ;
}

void	MateriaSource::_deleteRecipes(void)
{
	for (int i = 0; i < this->_maxRecipes; i++)
	{
		if (this->_recipes[i] != NULL)
		{
			delete this->_recipes[i];
			this->_recipes[i] = NULL;
		}
	}
	return ;
}

void	MateriaSource::displayKnownRecipes(void)
{
	std::cout << "MateriaSource knows the following recipes:" << std::endl;
	for (int i = 0; i < this->_maxRecipes; i++)
	{
		std::cout << "\t[" << i << "] ";
		if (this->_recipes[i] == NULL)
			std::cout << "Empty slot.";
		else
			std::cout << this->_recipes[i]->getType() << " materia.";
		std::cout << std::endl;
	}
	return ;
}