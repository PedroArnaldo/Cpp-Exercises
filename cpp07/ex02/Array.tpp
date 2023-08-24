#include "Array.hpp"

template <typename T>
Array<T>::Array(void){
}

template <typename T>
Array<T>::Array(size_t size) :
    _arraySize(size)
{
    this->_elements = new T[_arraySize];
}

template <typename T>
Array<T>::Array(const Array<T> &src) :
    _elements(NULL),
    _arraySize(src.size() > 0 ? src.size() : 0)
{
    if (src.size() > 0)
    {
        this->_elements = new T[src.size()];
        for (size_t i = 0; i < src.size(); i++)
        {
            this->_elements[i] = src.elemnts[i];
        }
        
    }
}

template <typename T>
Array<T>::~Array(void)
{
    delete[] this->_elements;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &src)
{
    if (this->size() > 0)
        delete[] this->_elements;

    if (src.size() > 0)
    {
        this->_elements = new T[src.size()];
        for (size_t i = 0; i < src.size(); i++)
        {
            this->_elements[i] = src._elements[i];
        }
        
    }
}

template <typename T>
T& Array<T>::operator[](size_t index) const
{
    if (index >= 0 && index < this->size()) 
        return this->_elements[index];
    else
        throw Array::OutOfRangeException();
}

template <typename T>
size_t Array<T>::size(void) const
{
    return this->_arraySize;
}

template <typename T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
    return "error index: out of range";
}
