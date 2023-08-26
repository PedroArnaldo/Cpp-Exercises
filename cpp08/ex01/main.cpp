#include <iostream>
#include "Span.hpp"

int main(void)
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    /*
        testar com random number
        testar copy constructor
        testar = operator
        testar numeros maximos
        testar a construção de números maiores de 100000 como size
    */

    return (0);
}
