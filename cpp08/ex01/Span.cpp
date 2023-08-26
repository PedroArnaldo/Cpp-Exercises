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

unsigned int Span::getSize(void)
{
    return this->_size;
}

void Span::addNumber(unsigned int element)
{
    //fazer verificação
    this->_elements.push_back(element);
}

void AddManyNumbers(void)
{
    //fazer o código para adicionar mais de um milhao de números.
}

unsigned int Span::shortestSpan(void)
{
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

unsigned int Span::longestSpan(void)
{
    unsigned int largestDistance = this->_elements[this->_elements.size() - 1] - this->_elements[0];
    for (size_t i = 0; i < this->_elements.size() - 1; i++)
    {
        unsigned int distance = this->_elements[i + 1] - this->_elements[i];
        if (distance > largestDistance)
            largestDistance = distance;
    }
    return largestDistance;
}

