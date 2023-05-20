#include "Fixed.hpp"

void    testComparisonOperators()
{
    Fixed a(21);
    Fixed b(42);
    bool result;

    result = a > b;
    std::cout << "21 > 42 = " << result << std::endl;
    result = a < b;
    std::cout << "21 < 42 = " << result << std::endl;
    result = a >= b;
    std::cout << "21 >= 42 = " << result << std::endl;
    result = a <= b;
    std::cout << "21 <= 42 = " << result << std::endl;
    result = a == b;
    std::cout << "21 == 42 = " << result << std::endl;
    result = a != b;
    std::cout << "21 != 42 = " << result << std::endl;
}

void    testArithmeticOperators()
{

}


int main(void)
{

    //testComparisonOperators();
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

   std::cout << b << std::endl;

     std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}