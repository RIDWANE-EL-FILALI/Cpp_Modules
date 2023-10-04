#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Default contructor for clas Dog called" << std::endl;
    this->type = "Dog";
    return ;
}

Dog::Dog(Dog const &src) : Animal()
{
    std::cout << "Copy constructor for clas Dog called" << std::endl;
    *this = src;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Dog coppy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << this->type << " : Arf Arf Arf" << std::endl;
    return ;
}