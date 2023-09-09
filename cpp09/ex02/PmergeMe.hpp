#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <deque>
#include <stdlib.h>

class PmergeMe
{
    private:
        PmergeMe();
        PmergeMe(const PmergeMe &cpy);
        PmergeMe& operator=(const PmergeMe &src);
        bool checkInput(char **arg);
        std::vector<unsigned int>  _vector;
        std::deque<unsigned int> _deque;
        void mergeInsertSortVector(std::vector<unsigned int> &vector, unsigned int start, unsigned int end);
        void mergeInsertSortDeque(std::deque<unsigned int> &deque);
        void insertionSortVector(std::vector<unsigned int> &vector);
        void mergeSortVector(std::vector<unsigned int> &vector, unsigned int start, unsigned int middle, unsigned int end);


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