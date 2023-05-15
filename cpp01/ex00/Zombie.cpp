#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
{
	setName(name);
}

Zombie::~Zombie(void)
{
	std::cout << getName() << " destructor." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName(void)
{
	return (this->_name);
}

void Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
