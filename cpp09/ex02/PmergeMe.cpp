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
    
    std::cout << " Before: ";
    for (size_t i = 0; i < _vector.size(); i++)
    {
        std::cout << _vector[i] << " ";
    }
    std::cout << std::endl;
    mergeInsertSortVector(_vector, 0, _vector.size() - 1);   
   
    for (size_t i = 0; i < _vector.size(); i++)
    {
        std::cout << _vector[i] << " ";
    }
}

const char* PmergeMe::invalidArgException::what() const throw()
{
    return "Error: input invalid.";
}

//Sort vector
void PmergeMe::insertionSortVector(std::vector<unsigned int> &vector)
{
    for (unsigned int i = 1; i < vector.size(); i++)
    {
        int currentIndex = i;
        while (currentIndex > 0 && vector[currentIndex - 1] > vector[currentIndex])
        {
            int temp = vector[currentIndex];
            vector[currentIndex] = vector[currentIndex - 1];
            vector[currentIndex - 1] = temp;
            currentIndex--;
        }
    }
}

void PmergeMe::mergeSortVector(std::vector<unsigned int> &vector, unsigned int start, unsigned  int mid,  unsigned int end)
{
    std::vector<unsigned int> leftVect(mid - start + 1);
    std::vector<unsigned int> rightVec(end - mid);

    for (unsigned int i = 0; i < leftVect.size(); ++i)
        leftVect[i] = vector[start + i];

    for (unsigned int i = 0; i < rightVec.size(); ++i)
        rightVec[i] = vector[mid + 1 + i];
    
    unsigned int leftIndex = 0, rightIndex = 0;

    unsigned int currentIndex = start;

    while (leftIndex < leftVect.size() && rightIndex < rightVec.size())
    {
        if (leftVect[leftIndex] <= rightVec[rightIndex]){
            vector[currentIndex] = leftVect[leftIndex];
            leftIndex++;
        }
        else {
            vector[currentIndex] = rightVec[rightIndex];
            rightIndex++;
        }
        currentIndex++;
    }

    while (leftIndex < leftVect.size())
        vector[currentIndex++] = leftVect[leftIndex++];

    while (rightIndex  < rightVec.size())
        vector[currentIndex++] = rightVec[rightIndex++];
}

void PmergeMe::mergeInsertSortVector(std::vector<unsigned int> &vector, unsigned int start, unsigned int end)
{
    unsigned int middle = 0;
   // unsigned int size = vector.size();

    // if (size < 16){
    //     insertionSortVector(vector);
    // }
    //else{
       middle = (start + end) / 2;

       mergeInsertSortVector(vector, start, middle);
       mergeInsertSortVector(vector, middle + 1, end);

      mergeSortVector(vector, start, middle, end);
    //}
}