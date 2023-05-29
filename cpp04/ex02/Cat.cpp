#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal("Cat")
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->brain = new Brain(*src.brain);
	*this = src;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const & src)
{
	std::cout << "Cat Operator Assignment called" << std::endl;
	if (this != &src)
	{
		this->type = src.getType();
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIAU MIAU MIAU" << std::endl;
}

std::string& Cat::think()
{
	return (this->brain->getIdea());
}