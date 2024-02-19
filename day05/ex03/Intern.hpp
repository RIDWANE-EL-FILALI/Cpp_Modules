#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern &	operator=(Intern const & src);

		AForm *	makeForm(std::string formName, std::string target);

		class InvalidFormName : public std::exception {
			public:
				virtual const char *	what(void) const throw();
		};

	private:
		typedef struct	sFormList
		{
			std::string const &	formName;
			AForm *	(*function)(std::string const &);
		}	formList;
};



#endif