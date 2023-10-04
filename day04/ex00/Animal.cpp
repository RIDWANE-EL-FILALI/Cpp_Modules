#include "Animal.hpp"

Animal::Animal(void)
{
    type = "unknown";
    std::cout << "Default constructer for class Animal called" << std::endl;
    return ;
}
Animal::~Animal(void)
{
    std::cout << "Destructor for class Animal called" << std::endl;
    return ;
}
Animal::Animal(Animal &src)
{
    std::cout << "Copy constructor for Animal class colled" << std::endl;
    *this = src;
    return ;
}
Animal &Animal::operator=(Animal &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}