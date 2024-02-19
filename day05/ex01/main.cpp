#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << GREEN << "initiating the tests for every bureaucrat and Form" << RESET << std::endl;
    try
    {
        // Bureaucrat non("non", -1);
        // Form non("non", 160, -10);
        Form one("one", 12, 4);
        std::cout << one << std::endl;
        Bureaucrat zero("Liam", 11);
        std::cout << zero << std::endl;
        zero.signForm(one);
        // zero.signForm(one);
        // one.beSigned(zero);
        std::cout << one << std::endl;
        // Bureaucrat one("Noah", 150);
        // std::cout << one << std::endl;
        // Bureaucrat two("Oliver", 4);
        // std::cout << two << std::endl;
        // Bureaucrat three("James", 150);
        // std::cout << three << std::endl;
        // Bureaucrat four("Elijah", 1);
        // std::cout << four << std::endl;
        // Bureaucrat five;
        // std::cout << five << std::endl;
        // five.decrementGrade();
        // std::cout << five << std::endl;
        // five.incrementGrade();
        // std::cout << five << std::endl;
        // cases were the exception will be caught
        // three.decrementGrade();
        // four.incrementGrade();
        // Bureaucrat six("William", 151);
        // Bureaucrat seven("William", -4);

    } catch(std::exception const & e)
    {
        std::cout << RED << "Exception : " <<  e.what() << RESET << std::endl;
    }
    return (0);
}