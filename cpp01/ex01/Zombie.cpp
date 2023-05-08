#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor zombie" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor zombie" << std::endl;
	return ;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName(void)
{
	return (this->_name);
}
