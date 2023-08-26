#include "easyfind.hpp"

const char* ValueNotFound::what() const throw(){
    return "Value not found";
};

template <typename Container>
typename Container::const_iterator easyfind(const Container& container, int value)
{
    typename Container::const_iterator it =  std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw ValueNotFound();
    return it;
}