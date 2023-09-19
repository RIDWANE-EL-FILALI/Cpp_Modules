#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    private:
        int value;
        static const int fractionalBit = 8;
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);

        Fixed& operator=(Fixed const &src);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif

