#include "AForm.hpp"

AForm::AForm(void) : name("basic form"), sign(false), sign_grade(20), executing_grade(5) {
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(AForm const &src) : name(src.name), sign(false), sign_grade(src.sign_grade), executing_grade(src.executing_grade) {
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int const sign_grade, int const executing_grade) : name(name), sign(false) , sign_grade(sign_grade), executing_grade(executing_grade){
    std::cout << "AForm constructor with arguments called" << std::endl;
    if (sign_grade < Bureaucrat::highestGrade || executing_grade < Bureaucrat::highestGrade)
        throw(AForm::GradeTooHighException());
    else if (sign_grade > Bureaucrat::lowestGrade || executing_grade > Bureaucrat::lowestGrade)
        throw(AForm::GradeTooLowException());
}

AForm &AForm::operator=(AForm const &src) {
    std::cout << "AForm copy assignment operator called" << std::endl;
    this->sign = src.sign;
    return (*this);
}

AForm::~AForm(void) {
    std::cout << "AForm default destructor called" << std::endl;
}

std::string const &AForm::getName(void) {
    return (this->name);
}

bool AForm::getSign(void) {
    return (this->sign);
}

int AForm::getSignGrade(void) {
    return (this->sign_grade);
}

int AForm::getExecutingGrade(void) {
    return (this->executing_grade);
}

void AForm::beSigned(Bureaucrat &Bureaucrat) {
    if (this->sign)
        throw(AForm::AlreadySignedException());
    else if (Bureaucrat.getGrade() > this->sign_grade)
        throw(AForm::GradeTooLowException());
    this->sign = true;
}

void	AForm::execute(Bureaucrat &bureaucrat)
{
	if (this->sign == false)
		throw (AForm::NotSignedException());
	if (bureaucrat.getGrade() > this->executing_grade)
		throw (AForm::GradeTooLowException());
	this->beExecuted();
	return ;
}

const char *AForm::AlreadySignedException::what(void) const throw() {
    return ("Sorry The form is already signed");
}

const char *AForm::GradeTooHighException::what(void) const throw() {
    return ("Your grade is too high for the form");
}

const char *AForm::GradeTooLowException::what(void) const throw() {
    return ("Your grade is too low for the form");
}

const char *	AForm::NotSignedException::what(void) const throw()
{
	return ("Form has not been signed.");
}

std::ostream & operator<<(std::ostream & os, AForm & obj) {
    os << MAGENTA "AForm {" << obj.getName() << "} with the sign of (" << (obj.getSign() ? "Signed" : "Unsigned") << ")" << " and the required grade to sign it is " << obj.getSignGrade() << " and to execute it " << obj.getExecutingGrade() << RESET;
    return (os);
}
