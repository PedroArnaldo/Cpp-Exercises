#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int num) : _value(num << this->bitsFixedPoint)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _value(int(round((num * (1 << this->bitsFixedPoint)))))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &obj)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->_value = obj.getRawBits();
    return *this;
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