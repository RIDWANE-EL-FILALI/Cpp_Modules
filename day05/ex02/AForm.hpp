#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public:
        AForm(void);
        AForm(AForm const &src);
        AForm(const std::string &name, int const sign_grade, int const executing_grade);
        AForm &operator=(AForm const &src);
        ~AForm(void);
        std::string const &getName(void) const;
        bool getSign(void);
        int getSignGrade(void);
        int getExecutingGrade(void);
        void beSigned(Bureaucrat &Bureaucrat);
        void execute(Bureaucrat const &bureaucrat) const; 
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
        class AlreadySignedException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
        class NotSignedException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
    protected:
        virtual void beExecuted(void) const = 0;
    private:
        const std::string name;
        bool sign;
        const int sign_grade;
        const int executing_grade;
};

std::ostream &	operator<<(std::ostream & os, AForm & obj);

#endif
