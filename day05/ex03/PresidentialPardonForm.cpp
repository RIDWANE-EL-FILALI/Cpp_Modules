#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
		:	AForm("Presidential Pardon Form",
					PresidentialPardonForm::gradeToSign,
					PresidentialPardonForm::gradeToExecute),
			_target("Unknown")
{
	std::cout << CYAN "PresidentialPardonForm default constructor called."
		RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
		:	AForm(src),
			_target(src._target)
{
	std::cout << CYAN "PresidentialPardonForm copy constructor called."
		RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
		:	AForm("Presidential Pardon Form",
					PresidentialPardonForm::gradeToSign,
					PresidentialPardonForm::gradeToExecute),
			_target(target)
{
	std::cout << CYAN "PresidentialPardonForm attribute constructor called."
		RESET << std::endl;
	if (_target.empty())
		_target = "Unknown";
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << CYAN "PresidentialPardonForm destructor called."
		RESET << std::endl;
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(
									PresidentialPardonForm const & src)
{
	this->_target = src._target;
	return (*this);
}

std::string const &	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::beExecuted(void) const
{
	std::cout << this->_target
		<< " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}