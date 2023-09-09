#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **arg)
{
    if (!checkInput(arg))
        throw invalidArgException();
    result(arg);
}

PmergeMe::PmergeMe(const PmergeMe &cpy)
{
    (void) cpy;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe &src)
{
    (void) src;
    return *this;
}

bool PmergeMe::checkInput(char **arg)
{
    int i = 1;
    int j = 0;

    while(arg[i])
    {
        j = 0;
        while (arg[i][j] != '\0')
        {
            if(!isdigit(arg[i][j]))
                return false;
            j++;
        }
        
        i++;
    }
    return (true);
}

void PmergeMe::result(char **arg)
{
    unsigned int num;
    int i = 1;

    while (arg[i])
    {
        num = static_cast<unsigned int>(std::atof(arg[i]));

        _vector.push_back(num);
        _deque.push_back(num);
        i++;
    }
}

const char* PmergeMe::invalidArgException::what() const throw()
{
    return "Error: input invalid.";
}
