#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	setWeapon(weapon);
	setName(name);
}

HumanA::~HumanA(void)
{

}

std::string HumanA::getName(void) const
{
	return (_name);
}

void HumanA::setName(std::string name)
{
	this->_name = name;
}

Weapon HumanA::getWeapon(void) const
{
	return (_weapon);
}

void HumanA::setWeapon(const Weapon& weapon)
{
	this->_weapon = weapon;
}

void HumanA::attack(void) const
{
	std::cout <<  getName() << " attacks with their " << _weapon.getType() << std::endl;	
}
