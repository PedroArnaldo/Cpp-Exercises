#ifndef EASYFIND
#define EASYFIND

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <exception>

template <typename T>
typename T::const_iterator easyfind(const T& cont, int value);

class ValueNotFound: public std::exception{
    public:
        const char *what() const throw();
};

#include "easyfind.tpp"

#endif
