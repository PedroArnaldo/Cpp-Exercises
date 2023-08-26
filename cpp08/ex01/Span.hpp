#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <ctime>

class Span
{
    private:
        std::vector<int> _elements;
        unsigned int _size;

    public:
        Span(void);
        Span(unsigned int size);
        Span(const Span& cpy);
        ~Span(void);

        Span& operator=(const Span& src);

        unsigned int getSize(void);
        void addNumber(const int element);
        void addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan(void);
        int longestSpan(void);

    class IndexOfRange : public std::exception {
        public:
            const char *what() const throw();
    };

    class insufficientElement : public std::exception {
        public:
            const char *what() const throw();
    };
};

#endif