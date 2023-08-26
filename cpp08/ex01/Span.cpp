#include "Span.hpp"

Span::Span(void): 
    _size(0)
{

}

Span::Span(unsigned int size) :
    _size(size)
{

}

Span::Span(const Span& cpy) :
    _size(cpy._size)
{    
    if (cpy._size > 0){
       
        for (unsigned int i = 0; i < cpy._size; i++)
        {
            this->_elements[i] = cpy._elements[i];
        }
        
    }
        
}

Span::~Span(void){
    
}

Span& Span::operator=(const Span& src){
    
    this->_size = src._size;

    if (src._size > 0){
       
        for (unsigned int i = 0; i < src._size; i++)
        {
            this->_elements[i] = src._elements[i];
        }
        
    }
    return *this;
}

const char* Span::IndexOfRange::what() const throw(){
    return "Index of Range";
}

const char* Span::insufficientElement::what() const throw(){
    return "Insufficient Element";
}

unsigned int Span::getSize(void)
{
    return this->_size;
}

void Span::addNumber(const int element)
{
    if (this->_elements.size() >= this->getSize())
        throw Span::IndexOfRange();
    this->_elements.push_back(element);
}

void Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->_elements.size() >= this->getSize())
        throw Span::IndexOfRange();
    this->_elements.insert(this->_elements.end(), begin, end);
}

int Span::shortestSpan(void)
{
    if (this->_elements.size() <= 1 || this->_elements.empty())
        throw Span::insufficientElement();

    unsigned int shortDistance = this->_elements[1] - this->_elements[0];

    std::sort(this->_elements.begin(), this->_elements.end());

    for (size_t i = 0; i < this->_elements.size() - 1; i++)
    {
        unsigned int distance = this->_elements[i + 1] - this->_elements[i];
        if (distance < shortDistance)
            shortDistance = distance;
    }
    
    return shortDistance;
}

int Span::longestSpan(void)
{
    if (this->_elements.size() <= 1 || this->_elements.empty())
        throw Span::insufficientElement();

    unsigned int largestDistance = this->_elements[this->_elements.size() - 1] - this->_elements[0];

    std::sort(this->_elements.begin(), this->_elements.end());

    for (size_t i = 0; i < this->_elements.size() - 1; i++)
    {
        unsigned int distance = this->_elements[i + 1] - this->_elements[i];
        if (distance > largestDistance)
            largestDistance = distance;
    }
    return largestDistance;
}

