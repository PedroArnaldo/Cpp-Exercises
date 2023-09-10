#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **arg)
{
    if (!checkInput(arg))
        throw invalidArgException();
    execute(arg);
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

void PmergeMe::fillContainers(char **arg)
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

void PmergeMe::execute(char **arg)
{
    clock_t startVector;
    clock_t endVector;
    clock_t startDeque;
    clock_t endDeque;
    unsigned int size;

    fillContainers(arg);

    size = _vector.size();

    printVector("Before");

    
    startVector = clock();
    mergeInsertSortVector(_vector, 0, _vector.size() - 1);
    endVector = clock();

    startDeque = clock();
    mergeInsertSortDeque(_deque, 0, _deque.size() - 1);
    endDeque = clock();

    printVector("After");

    double timeVector = (double)(endVector - startVector) / CLOCKS_PER_SEC;
    double timeDeque = (double)(endDeque - startDeque) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << size << " elemenst withs std::vector : " << timeVector * 1000000.0 << " us" << std::endl;
    std::cout << "Time to process a range of " << size << " elemenst withs std::deque : " << timeDeque  * 1000000.0 << " us" << std::endl;

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
   unsigned int middle = (start + end) / 2;
   unsigned int size = start - end;

    if (size < 16){
        insertionSortVector(vector);
    }
    else{
       mergeInsertSortVector(vector, start, middle);
       mergeInsertSortVector(vector, middle + 1, end);
    }
    mergeSortVector(vector, start, middle, end);
}

//Sort deque
void PmergeMe::insertionSortDeque(std::deque<unsigned int> &deque)
{
    for (unsigned int i = 1; i < deque.size(); i++)
    {
        int currentIndex = i;
        while (currentIndex > 0 && deque[currentIndex - 1] > deque[currentIndex])
        {
            int temp = deque[currentIndex];
            deque[currentIndex] = deque[currentIndex - 1];
            deque[currentIndex - 1] = temp;
            currentIndex--;
        }
    }
}

void PmergeMe::mergeSortDeque(std::deque<unsigned int> &deque, unsigned int start, unsigned  int mid,  unsigned int end)
{
    std::deque<unsigned int> leftDeque(mid - start + 1);
    std::deque<unsigned int> rightDeque(end - mid);

    for (unsigned int i = 0; i < leftDeque.size(); ++i)
        leftDeque[i] = deque[start + i];

    for (unsigned int i = 0; i < rightDeque.size(); ++i)
        rightDeque[i] = deque[mid + 1 + i];
    
    unsigned int leftIndex = 0, rightIndex = 0;

    unsigned int currentIndex = start;

    while (leftIndex < leftDeque.size() && rightIndex < rightDeque.size())
    {
        if (leftDeque[leftIndex] <= rightDeque[rightIndex]){
            deque[currentIndex] = leftDeque[leftIndex];
            leftIndex++;
        }
        else {
            deque[currentIndex] = rightDeque[rightIndex];
            rightIndex++;
        }
        currentIndex++;
    }

    while (leftIndex < leftDeque.size())
        deque[currentIndex++] = leftDeque[leftIndex++];

    while (rightIndex  < rightDeque.size())
        deque[currentIndex++] = rightDeque[rightIndex++];
}

void PmergeMe::mergeInsertSortDeque(std::deque<unsigned int> &deque, unsigned int start, unsigned int end)
{
   unsigned int middle = (start + end) / 2;
   unsigned int size = start - end;

    if (size < 16){
        insertionSortDeque(deque);
    }
    else{
       mergeInsertSortDeque(deque, start, middle);
       mergeInsertSortDeque(deque, middle + 1, end);
    }
    mergeSortDeque(deque, start, middle, end);
}

void PmergeMe::printVector(std::string type)
{
    std::cout << type << ":\t";

    if (_vector.size() > 10)
    {
        for (unsigned int i = 0; 
        i <= 5; i++)
        {
            std::cout << _vector[i] << "\t";
        }
        std::cout << "[..]";
    }
    else
    {
        for (std::vector<unsigned int> ::const_iterator it = _vector.begin(); 
            it != _vector.end(); ++it)
        {
            std::cout << *it << " ";
        }
    }
    std::cout << std::endl;
    
}

const char* PmergeMe::invalidArgException::what() const throw()
{
    return "Error: input invalid.";
}
