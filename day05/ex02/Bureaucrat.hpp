#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
#define RESET         "\033[0m"
#define BLACK          "\033[30m"
#define RED            "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW         "\033[33m"
#define BLUE           "\033[34m"
#define MAGENTA        "\033[35m"
#define CYAN           "\033[36m"
#define WHITE          "\033[37m"


class AForm;

class Bureaucrat {
    public:
        //default constructer
        Bureaucrat(void);
        //copy constructor
        Bureaucrat(Bureaucrat const &src);
        //copy assignment operator
        Bureaucrat &operator=(Bureaucrat const &src);
        //constructor with arguments
        Bureaucrat(const std::string &name, int grade);
        //default destructor
        ~Bureaucrat(void);

        //setters and getters
        std::string const &getName(void);
        const int getGrade(void) const;
        //increment and decrement grade
        void incrementGrade(void);
        void decrementGrade(void);
        void signForm(AForm & form);
        void executeForm(AForm const &form);
        static int const	highestGrade = 1;
		static int const	lowestGrade = 150;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
    private:
        const std::string name;
        int grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);

#endif