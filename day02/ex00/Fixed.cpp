#include "Fixed.hpp"

Fixed::Fixed(void)
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called called" << std::endl;
    *this = src;
    return;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other)
        value = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getrawbits function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setrawbits function called" << std::endl;
    value = raw;
    return ;
}
