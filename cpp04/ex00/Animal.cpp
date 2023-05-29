#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
	this->type = "not found";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal String Constructor called" << std::endl;	
	this->type = type;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	this->type = src.type;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal &Animal::operator=( Animal const &src)
{
	std::cout << "Animal Operator Assignment called" << std::endl;
	this->type = src.type;
	return *this;
}

std::string const& Animal::getType(void) const
{
	std::cout << "Animal getType called" << std::endl;
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << "Base class, makeSound not configured." << std::endl;
}
