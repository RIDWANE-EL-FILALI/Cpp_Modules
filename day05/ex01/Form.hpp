#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
    public:
        Form(void);
        Form(Form const &src);
        Form(const std::string &name, int const sign_grade, int const executing_grade);
        Form &operator=(Form const &src);
        ~Form(void);
        std::string const &getName(void);
        bool getSign(void);
        int getSignGrade(void);
        int getExecutingGrade(void);
        void beSigned(Bureaucrat &Bureaucrat);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what(void) throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what(void) throw();
        };
        class AlreadySignedException : public std::exception {
            public:
                virtual const char *what(void) throw();
        };
    private:
        const std::string name;
        bool sign;
        const int sign_grade;
        const int executing_grade;
};

std::ostream &	operator<<(std::ostream & os, Form & obj);

#endif // !FORM_HPP
