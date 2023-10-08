#include "Dog.hpp"

Dog::Dog(void) : Animal(), brain(new Brain())
{
    std::cout << "Default contructor for clas Dog called" << std::endl;
    this->type = "Dog";
    return ;
}

Dog::Dog(Dog const &src) : Animal(), brain(NULL)
{
    std::cout << "Copy constructor for clas Dog called" << std::endl;
    *this = src;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
    return ;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Dog coppy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        if (this->brain != NULL)
            delete this->brain;
        this->brain = new Brain(*src.brain);
    }
    return (*this);
}

Brain *Dog::getBrain(void) const
{
    return (this->brain);
}

void Dog::makeSound(void) const
{
    std::cout << this->type << " : Arf Arf Arf" << std::endl;
    return ;
}