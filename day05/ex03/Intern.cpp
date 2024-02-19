#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << CYAN "Intern default constructor called." RESET << std::endl;
}

Intern::Intern(Intern const & src) {
	std::cout << CYAN "Intern copy constructor called." RESET << std::endl;
	(void)src;
}

Intern::~Intern(void) {
	std::cout << CYAN "Intern desctructor called." RESET << std::endl;
}

Intern &	Intern::operator=(Intern const & src) {
	std::cout << CYAN "Intern assignment operator overload called." RESET << std::endl;
	(void)src;
	return (*this);
}

static AForm *	createPresidentialPardonForm(std::string const & target) {
	return (new PresidentialPardonForm(target));
}

static AForm *	createRobotomyRequestForm(std::string const & target) {
	return (new RobotomyRequestForm(target));
}

static AForm *	createShrubberyCreationForm(std::string const & target) {
	return (new ShrubberyCreationForm(target));
}

const char *	Intern::InvalidFormName::what(void) const throw() {
	return ("Invalid form name");
}

AForm *	Intern::makeForm(std::string formName, std::string target) {
	AForm *	formToCreate = NULL;
	static formList const	forms[3] = 
		{
			{"shrubbery", createShrubberyCreationForm},
			{"robotomy", createRobotomyRequestForm},
			{"presidential", createPresidentialPardonForm}
		};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i].formName == formName)
		{
			formToCreate = forms[i].function(target);
			std::cout << GREEN "Intern created " << *formToCreate << RESET << std::endl;
			return (formToCreate);
		}
	}
	std::cout << RED "Intern could not create form named \""
		<< formName << "\"" RESET << std::endl;
	throw Intern::InvalidFormName();
}