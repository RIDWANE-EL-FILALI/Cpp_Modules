#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice")
{
	std::cout <<  "Ice default constructor called."  << std::endl;
	return ;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	std::cout << "Ice copy constructor called."  << std::endl;
	*this = src;
	return ;
}

Ice::~Ice(void)
{
	std::cout <<  "Ice destructor called."  << std::endl;
	return ;
}

Ice &	Ice::operator=(Ice const & src)
{
	std::cout << "Ice assignment operator called."  << std::endl;
	this->type = src.type;
	return (*this);
}

AMateria *	Ice::clone(void) const
{
	AMateria *	iceClone = new Ice();
	return (iceClone);
}

void	Ice::use(ICharacter & target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *"
		 << std::endl;
}