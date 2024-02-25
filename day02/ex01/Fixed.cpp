#include "Fixed.hpp"
#include <bitset>

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
    return ;
}

/* constructor with float */
Fixed::Fixed(float const f)
{
    std::cout << "Constructor with float as argument called" << std::endl;
    std::cout << roundf(f * (1 << fractionBits)) << std::endl;
    value = roundf(f * (1 << fractionBits));
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

std::ostream& operator<<(std::ostream& os, const std::string &str)
{
    //printf("hello\n");
    (void)str;
    int a = 20;
    os << a;
    return (os);
}

std::string &operator+(std::string str1, std::string str2)
{
    std::string &return_value = str2;
    (void)str1;
    printf("fuck it");
    return (str2);
}




