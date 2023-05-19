#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

    public:

        Fixed(void);
        Fixed(Fixed const &src);
        Fixed(const int num);
        Fixed(const float num);
        ~Fixed(void);

        Fixed &operator=(Fixed const &obj);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
    
    private:
        int _value;
        static const int bitsFixedPoint = 8;

};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif