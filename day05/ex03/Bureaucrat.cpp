#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("michael"), grade(100){
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    this->grade = src.grade;
    std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    return (*this);
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) {
    std::cout << "Bureaucrat constructor with arguments called" << std::endl;
    if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->grade = grade;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Default destructor called" << std::endl;
}

std::string const &Bureaucrat::getName(void) {
    return (this->name);
}

int Bureaucrat::getGrade(void) {
    return (this->grade);
}

void Bureaucrat::incrementGrade(void) {
    if (this->grade <= 1)
        return throw(Bureaucrat::GradeTooHighException());
    else
    {
        std::cout << YELLOW "incrementing the grade of The bureaucrat by 1" RESET << std::endl;
        this->grade -= 1;
    }
}

void Bureaucrat::decrementGrade(void) {
    if (this->grade >= 150)
        return throw(Bureaucrat::GradeTooLowException());
    else
    {
        std::cout << YELLOW "decrementing the grade of The bureaucrat by 1" RESET << std::endl;
        this->grade += 1;
    }
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("you just reached the heighest grade ever recorded");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("you just reached the lowest grade ever recorded");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
    os << MAGENTA "Bureaucrat {" << obj.getName() << "} with the grade of (" << obj.getGrade() << ")" RESET;
    return (os);
}

void	Bureaucrat::signForm(AForm & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << GREEN << this->getName() << " signed The form " << form.getName() << RESET << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << RED << this->getName() << " couldn't sign The form " << form.getName() << " because: "
			<< e.what() << RESET << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm & form)
{
	try
	{
		form.execute(*this);
		std::cout << GREEN << this->getName() << " executed " << form.getName()  << RESET << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << RED << this->getName() << " couldn't execute " << form.getName() << " because: "
			<< e.what() << RESET << std::endl;
	}
	return ;
}