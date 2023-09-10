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
        void insertionSortVector(std::vector<unsigned int> &vector);
        void mergeSortVector(std::vector<unsigned int> &vector, unsigned int start, unsigned int middle, unsigned int end);


        void mergeInsertSortDeque(std::deque<unsigned int> &deque, unsigned int start, unsigned int end);
        void insertionSortDeque(std::deque<unsigned int> &deque);
        void mergeSortDeque(std::deque<unsigned int> &deque, unsigned int start, unsigned int middle, unsigned int end);

        void fillContainers(char **arg);
        void printVector(std::string type);


    public:
        PmergeMe(char **arg);
        ~PmergeMe();
        void execute(char **arg);
    
        class invalidArgException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};


#endif