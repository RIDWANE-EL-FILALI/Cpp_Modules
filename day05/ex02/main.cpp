#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << GREEN << "initiating the tests for every bureaucrat and Form" << RESET << std::endl;
    try
    {
        Bureaucrat one("john", 15);
        Bureaucrat two("david", 50);
        Bureaucrat three("dwayn", 140);
        std::cout << one << std::endl;
        std::cout << two << std::endl;
        std::cout << three << std::endl;
        ShrubberyCreationForm shrubbery("forest");
        RobotomyRequestForm Robot("mr robot");
        PresidentialPardonForm Pardon("Pardon");
        // three.signForm(Robot);
        three.executeForm(Robot);
        // Robot.beSigned(three);
        one.signForm(Robot);
        Robot.execute(one);
        // Robot.beSigned(one);
        // Robot.beExecuted();
        // one.signForm(shrubbery);
        // one.executeForm(shrubbery);
        
        std::cout << shrubbery << std::endl;
        std::cout << Robot << std::endl;
        std::cout << Pardon << std::endl;
    } catch(std::exception const & e)
    {
        std::cout << RED << "Exception : " <<  e.what() << RESET << std::endl;
    }
    return (0);
}