#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
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
	_weapon = weapon;
}

void HumanA::attack(void) const
{
	cout << weapon.getType() << std::endl;	
}
