#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl; 
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->brain = new Brain(*src.brain);
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog Operator Assignment called" << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Haf Haf Haf" << std::endl;
}

std::string Dog::think() const 
{
	return (this->brain->getIdea());
}