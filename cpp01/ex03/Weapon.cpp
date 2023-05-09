#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this._type = weapon;
}

Weapon::~Weapon(void)
{
	
}

std::string	Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	this._type = type;
}
