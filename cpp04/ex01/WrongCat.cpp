#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=( WrongCat const & src )
{
	std::cout << "WrongCat Operator Assignment called" << std::endl;
	this->type = src.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat MIAU MIAU MIAU" << std::endl;
}

std::string WrongCat::getType() const
{
	return (this->type);
}