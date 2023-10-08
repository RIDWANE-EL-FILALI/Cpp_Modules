#include "AMateria.hpp"

AMateria::AMateria(void) : type("unknown")
{
	std::cout << "AMateria default constructor called." << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & src) : type(src.type)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria type constructor called." << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called." << std::endl;
	return ;
}

AMateria &	AMateria::operator=(AMateria const & src)
{
	std::cout << "AMateria assignment operator overload called." 
		<< std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	AMateria::use(ICharacter & target)
{
	std::cout << "* An unknown materia is being used against"
		<< target.getName() << " *" << std::endl;
	return ;
}

std::string const &	AMateria::getType(void) const
{
	return (this->type);
}