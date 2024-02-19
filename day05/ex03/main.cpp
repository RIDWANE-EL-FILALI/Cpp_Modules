#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << GREEN << "initiating the tests for every bureaucrat and Form" << RESET << std::endl;
    try
    {
        Intern jeff;
        AForm *holder;
        AForm *holder2;
        AForm *holder3;
        AForm *holder4;
        holder = jeff.makeForm("shrubbery", "non");
        holder2 = jeff.makeForm("robotomy", "one");
        holder3 = jeff.makeForm("presidential", "two");
        // holder4 = jeff.makeForm("non", "one");
        Bureaucrat Boss("Boss", 1);
        Boss.signForm(*holder);
        Boss.executeForm(*holder);
        delete(holder);
        Boss.signForm(*holder2);
        Boss.executeForm(*holder2);
        delete(holder2);
        Boss.signForm(*holder3);
        Boss.executeForm(*holder3);
        delete(holder3);
        // Boss.signForm(*holder4);
        // Boss.executeForm(*holder4);
        // delete(holder4);
    } catch(std::exception const & e)
    {
        std::cout << RED << "Exception : " <<  e.what() << RESET << std::endl;
    }
    return (0);
}