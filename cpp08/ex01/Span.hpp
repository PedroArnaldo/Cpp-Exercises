#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
    private:
        std::vector<unsigned int> _elements;
        unsigned int _size;

    public:
        Span(void);
        Span(unsigned int size);
        Span(const Span& cpy);
        ~Span(void);

        Span& operator=(const Span& src);

        unsigned int getSize(void);
        void addNumber(unsigned int element);
        void addManyNumbers(void);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
};

#endif