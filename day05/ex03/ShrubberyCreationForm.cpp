#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
		:	AForm("Shrubbery Creation Form",
					ShrubberyCreationForm::gradeToSign,
					ShrubberyCreationForm::gradeToExecute),
			_target("Unknown")
{
	std::cout << CYAN "ShrubberyCreationForm default constructor called."
		RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
		:	AForm(src),
			_target(src._target)
{
	std::cout << CYAN "ShrubberyCreationForm copy constructor called."
		RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
		:	AForm("Shrubbery Creation Form",
					ShrubberyCreationForm::gradeToSign,
					ShrubberyCreationForm::gradeToExecute),
			_target(target)
{
	std::cout << CYAN "ShrubberyCreationForm attribute constructor called."
		RESET << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << CYAN "ShrubberyCreationForm destructor called."
		RESET << std::endl;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(
									ShrubberyCreationForm const & src)
{
	this->_target = src._target;
	return (*this);
}

std::string const &	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::beExecuted(void) const
{
	std::ofstream	ofs;

	ofs.open((this->_target + "_shrubbery").c_str(),
								std::ofstream::out | std::ofstream::app);
	if (ofs.is_open())
	{
		ofs << ShrubberyCreationForm::_shrubbery;
		std::cout << "A shrubbery has been planted at "
				<< _target << "_shrubbery." << std::endl;
		ofs.close();
	}
	return ;
}

std::string const ShrubberyCreationForm::_shrubbery =
"\n"
"                %%%,%%%%%%%\n"
"                 ,'%% \\\\-*%%%%%%%\n"
"           ;%%%%%*%   _%%%%\"\n"
"            ,%%%       \\(_.*%%%%.\n"
"            % *%%, ,%%%%*(    '\n"
"          %^     ,*%%% )\\|,%%*%,_\n"
"               *%    \\/ #).-\"*%%*\n"
"                   _.) ,/ *%,\n"
"           _________/)#(_____________\n\n";
