#include <iostream>
#include "Span.hpp"

int main(void)
{

    {
        std::cout << "\nStandard Test" << std::endl;
        try
        {
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);

            std::cout << "ShortestSpan: " << sp.shortestSpan() << std::endl;
            std::cout << "LongestSpan: "<< sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << "\nRandom Number Test" << std::endl;
        try
        {
            std::vector<int> vec(100000);
            std::srand(time(NULL));

            std::generate(vec.begin(), vec.end(), std::rand);
            Span sp1 = Span(vec.size());
            sp1.addManyNumbers(vec.begin(), vec.end());

            std::cout << "ShortestSpan: " << sp1.shortestSpan() << std::endl;
            std::cout << "LongestSpan: "<< sp1.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

       {
        std::cout << "\nTest Error" << std::endl;
        try
        {   
            Span sp2 = Span(5);
            sp2.addNumber(6);
            sp2.addNumber(3);
            sp2.addNumber(17);
            sp2.addNumber(9);
            sp2.addNumber(11);
             sp2.addNumber(23);

            std::cout << "ShortestSpan: " << sp2.shortestSpan() << std::endl;
            std::cout << "LongestSpan: "<< sp2.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}
