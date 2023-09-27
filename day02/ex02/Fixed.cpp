#include "Fixed.hpp"

Fixed::Fixed(void)
{
    value = 0;
    //std::cout << "Default constructor called" << std::endl;
    return ;
}
Fixed::Fixed(int const n)
{
    //std::cout << "Constructor with int as argument called" << std::endl;
    value = n << fractionBits;
    return ;
}
Fixed::Fixed(float const f)
{
    //std::cout << "Constructor with float as argument called" << std::endl;
    value = int(roundf(f * (1 << fractionBits)));
    return ;
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    //std::cout << "Copy constructor called called" << std::endl;
    *this = src;
    return;
}

Fixed& Fixed::operator=(Fixed const &other)
{
    //std::cout << "Copy assignement operator called" << std::endl;
    if (this != &other)
        value = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getrawbits function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setrawbits function called" << std::endl;
    value = raw;
    return ;
}

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

bool Fixed::operator>(Fixed const &src)
{
    if (this->value > src.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<(Fixed const &src)
{
    if (this->value < src.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(Fixed const &src)
{
    if (this->value >= src.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(Fixed const &src) const
{
    if (this->value <= src.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!=(Fixed const &src)
{
    if(this->value != src.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(Fixed const &src)
{
    if(this->value == src.getRawBits())
        return (true);
    return (false);
}

Fixed Fixed::operator+(Fixed const &src)
{
    return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(Fixed const &src)
{
    return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(Fixed const &src)
{
    return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(Fixed const &src)
{
    return Fixed(this->toFloat() / src.toFloat());
}

Fixed& Fixed::operator++(void)
{
    this->value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return (tmp);
}

Fixed& Fixed::operator--(void)
{
    this->value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return (tmp);
}

Fixed & Fixed::min(Fixed &one, Fixed &two)
{
    if (one <= two)
        return (one);
    return (two);
}

Fixed const & Fixed::min(Fixed const &one, Fixed const &two)
{
    if (one <= two)
        return (one);
    return (two);
}

Fixed & Fixed::max(Fixed &one, Fixed &two)
{
    if (one <= two)
        return (two);
    return (one);
}

Fixed const & Fixed::max(Fixed const &one, Fixed const &two)
{
    if (one <= two)
        return (two);
    return (one);
}









