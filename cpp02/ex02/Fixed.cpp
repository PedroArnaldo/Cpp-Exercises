#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::Fixed(const int num) : _value(num << this->bitsFixedPoint)
{
}

Fixed::Fixed(const float num) : _value(int(round((num * (1 << this->bitsFixedPoint)))))
{
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(Fixed const &obj)
{
    this->_value = obj.getRawBits();
    return *this;
}

bool  Fixed::operator>(Fixed const &obj)
{
    return this->_value > obj._value;
}

bool  Fixed::operator<(Fixed const &obj)
{
    return this->_value < obj._value;
}

bool  Fixed::operator>=(Fixed const &obj)
{
    return this->_value >= obj._value;
}

bool  Fixed::operator<=(Fixed const &obj)
{
    return this->_value <= obj._value;
}

bool  Fixed::operator==(Fixed const &obj)
{
    return this->_value == obj._value;
}

bool  Fixed::operator!=(Fixed const &obj)
{
    return this->_value != obj._value;
}

Fixed Fixed::operator+(Fixed const &obj)
{
    Fixed ret(this->_value + obj._value);
    return  ret;
}

Fixed Fixed::operator-(Fixed const &obj)
{
   Fixed ret(this->_value - obj._value);
    return  ret;
}

Fixed Fixed::operator*(Fixed const &obj)
{
    Fixed ret;
    ret.setRawBits((this->getRawBits() * obj.getRawBits()) >> this->bitsFixedPoint);
    return  ret;
}

Fixed Fixed::operator/(Fixed const &obj)
{
    Fixed ret;
    ret.setRawBits((this->getRawBits() / obj.getRawBits()) << this->bitsFixedPoint);
    return  ret;
}

Fixed &Fixed::operator++(void)
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{   
    Fixed tmp(*this);
    this->_value++;
    return (tmp);
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{   
    Fixed tmp(*this);
    this->_value--;
    return (tmp);
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
    return (first.getRawBits() > second.getRawBits()? first : second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    return (first.getRawBits() > second.getRawBits()? first : second);
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
    return (first.getRawBits() < second.getRawBits()? first : second);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    return (first.getRawBits() < second.getRawBits()? first : second);
}

int Fixed::getRawBits(void) const 
{
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

int     Fixed::toInt(void) const
{
    return (this->_value >>  this->bitsFixedPoint);
}

float   Fixed::toFloat(void) const
{
    return ((float(this->_value) / (1 << this->bitsFixedPoint)));
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}