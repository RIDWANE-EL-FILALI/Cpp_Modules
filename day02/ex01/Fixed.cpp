#include "Fixed.hpp"

/* constructer */
Fixed::Fixed(void)
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
    return ;
}

/* constructor with int */
Fixed::Fixed(int const n)
{
    std::cout << "Constructor with int as argument called" << std::endl;
    value = n << fractionBits;
    //std::cout << value << std::endl;
    return ;
}

/* constructor with float */
Fixed::Fixed(float const f)
{
    std::cout << "Constructor with float as argument called" << std::endl;
    value = int(roundf(f * (1 << fractionBits)));
    //std::cout << value << std::endl;
    return ;
}

/* destructor */
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

/* copy constructer */
Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called called" << std::endl;
    *this = src;
    return;
}

/* copy assignment operator */
Fixed& Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other)
        value = other.getRawBits();
    return (*this);
}

/* getrawbits function */
int Fixed::getRawBits(void) const
{
    std::cout << "getrawbits function called" << std::endl;
    return (value);
}

/* setrawbits functions */
void Fixed::setRawBits(int const raw)
{
    std::cout << "setrawbits function called" << std::endl;
    value = raw;
    return ;
}

/* toint function */
int Fixed::toInt(void) const
{
    return (value >> fractionBits);
}

float Fixed::toFloat(void) const
{
    return (float(value) / float(1 << fractionBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& number)
{
    os << number.toFloat();
    return (os);
}




