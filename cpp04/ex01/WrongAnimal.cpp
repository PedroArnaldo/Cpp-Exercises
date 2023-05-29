#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Not Found")
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal String Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	this->type = src.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;

}

WrongAnimal &				WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "WrongAnimal Operator Assignment called" << std::endl;
	this->type = src.getType();
	return *this;
}

std::string WrongAnimal::getType() const
{
	std::cout << "WrongAnimal getType called" << std::endl;
	return(type);
}
void WrongAnimal::makeSound() const
{
	std::cout << "Base class wrongAnimal, makeSound not configured." << std::endl;
}