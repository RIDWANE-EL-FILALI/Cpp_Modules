#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#define RESET_COLOR         "\033[0m"
#define BLACK_TEXT          "\033[30m"
#define RED_TEXT            "\033[31m"
#define GREEN_TEXT          "\033[32m"
#define YELLOW_TEXT         "\033[33m"
#define BLUE_TEXT           "\033[34m"
#define MAGENTA_TEXT        "\033[35m"
#define CYAN_TEXT           "\033[36m"
#define WHITE_TEXT          "\033[37m"

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
        int getGrade(void);
        //increment and decrement grade
        void incrementGrade(void);
        void decrementGrade(void);

        class GradeTooHighException : public std::exception {
            public:
                std::string what(void) throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                std::string what(void) throw();
        };
    private:
        const std::string name;
        int grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);

#endif