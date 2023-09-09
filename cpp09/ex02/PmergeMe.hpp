#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <deque>

class PmergeMe
{
    private:
        PmergeMe();
        PmergeMe(const PmergeMe &cpy);
        PmergeMe& operator=(const PmergeMe &src);
        bool checkInput(char **arg);
        std::vector<unsigned int>  _vector;
        std::deque<unsigned int> _deque;

    public:
        PmergeMe(char **arg);
        ~PmergeMe();
        void result(char **arg);
    
        class invalidArgException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};


#endif