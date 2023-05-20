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

        bool operator>(Fixed const &obj);
        bool operator<(Fixed const &obj);
        bool operator>=(Fixed const &obj);
        bool operator<=(Fixed const &obj);
        bool operator==(Fixed const &obj);
        bool operator!=(Fixed const &obj);

        Fixed operator+(Fixed const &obj);
        Fixed operator-(Fixed const &obj);
        Fixed operator*(Fixed const &obj);
        Fixed operator/(Fixed const &obj);

        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);

        static const Fixed &max(Fixed const &first, Fixed const &second);
        static Fixed &max(Fixed &first, Fixed &second);
        static const Fixed &min(Fixed const &first, Fixed const &second);
        static Fixed &min(Fixed first, Fixed second);

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