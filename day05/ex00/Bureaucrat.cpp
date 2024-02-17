#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("micheal"), grade(100){
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
    std::cout << "Bureaucrat constructor with arguments" << std::endl;
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
    if (this->grade >= 1);
        return throw(Bureaucrat::GradeTooHighException());
    else
        this->grad -= 1;
}

void Bureaucrat::decrementGrade(void) {
    if (this->grade <= 150)
        return throw(Bureaucrat::GradeTooLowException());
    else
        this->grade += 1;
}

std::string Bureaucrat::GradeTooHighException::what(void) throw() {
    return ("you just reached the heighest grade ever recorded");
}

std::string Bureaucrat::GradeTooLowException::what(void) throw() {
    return ("you just reached the lowest grade ever recorded");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
    os << "Bureaucrat {" << obj.getName() << "} with the grade of (" << obj.getGrade() << ")";
    return (os);
}