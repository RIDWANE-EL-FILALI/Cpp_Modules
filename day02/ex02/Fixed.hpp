#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    private:
        int value;
        static const int fractionBits = 8;
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed(int const n);
        Fixed(float const f);        

        Fixed& operator=(Fixed const &src);

        bool operator>(Fixed const & src);
        bool operator<(Fixed const & src);
        bool operator>=(Fixed const & src);
        bool operator<=(Fixed const & src);
        bool operator==(Fixed const & src);
        bool operator!=(Fixed const & src);

        Fixed operator+(Fixed const & src);
        Fixed operator*(Fixed const & src);
        Fixed operator-(Fixed const & src);
        Fixed operator/(Fixed const & src);

        Fixed & operator++(void);
        Fixed operator++(int);
        Fixed & operator--(void);
        Fixed operator--(int);

        static Fixed & min(Fixed &one, Fixed &two);
        static Fixed & min(Fixed const &one, Fixed const &two);
        static Fixed & max(Fixed &one, Fixed &two);
        static Fixed & max(Fixed const &one, Fixed const &two);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int toInt(void)const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& number);

#endif