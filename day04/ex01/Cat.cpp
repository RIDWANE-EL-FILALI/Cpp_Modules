#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Default contructor for class Cat called" << std::endl;
    this->type = "Cat";
    return ;
}
Cat::Cat(Cat const &src) : Animal()
{
    std::cout << "Copy constructor for class Cat called" << std::endl;
    *this = src;
    return ;
}
Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    return ;
}
Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Cat coppy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}
void Cat::makeSound(void) const
{
    std::cout << this->type << " : Meowwwww" << std::endl;
    return ;
}