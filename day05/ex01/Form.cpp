#include "Form.hpp"

Form::Form(void) : name("basic form"), sign(false), sign_grade(20), executing_grade(5) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(Form const &src) : name(src.name), sign(false), sign_grade(src.sign_grade), executing_grade(src.executing_grade) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(const std::string &name, int const sign_grade, int const executing_grade) : name(name), sign(false) {
    std::cout << "Form constructor with arguments called" << std::endl;
    if (sign_grade >= 20 || executing_grade >= 5)
        throw(Form::GradeTooLowException());
    else if (sign_grade < 1 || executing_grade < 1)
        throw(Form::GradeTooHighException());
    else
    {
        this->executing_grade = executing_grade;
        this->sign_grade = sign_grade;
    }
}

Form &Form::operator=(Form const &src) {
    std::cout << "Form copy assignment operator called" << std::endl;
    this->sign = sign;
    return (*this);
}

Form::~Form(void) {
    std::cout << "Form default destructor called" << std::endl;
}

std::string const &Form::getName(void) {
    return (this->name);
}

bool Form::getSign(void) {
    return (this->sign);
}

int Form::getSignGrade(void) {
    return (this->sign_grade);
}

int Form::getExecutingGrade(void) {
    return (this->executing_grade);
}

void Form::beSigned(Bureaucrat &Bureaucrat) {
    if (this->sign)
        throw(Form::AlreadySignedException());
    else if (Bureaucrat.getGrade() > this->sign_grade)
        throw(Form::GradeTooLowException());
    this->sign = true;
}

const char *Form::AlreadySignedException::what(void) throw() {
    return ("Sorry The form is already signed");
}

const char *Form::GradeTooHighException::what(void) throw() {
    return ("Your grade is too high for the form");
}

const char *Form::GradeTooLowException::what(void) throw() {
    return ("Your grade is too low for the form");
}

std::ostream & operator<<(std::ostream & os, Form & obj) {
    os << MAGENTA "Form {" << obj.getName() << "} with the sign of (" << (obj.getSign() ? "Signed" : "Unsigned") << ")" << "and the required grade to sign is " << obj.getSignGrade() << " and to execute it " << obj.getExecutingGrade() << RESET;
    return (os);
}
