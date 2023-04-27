#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
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
