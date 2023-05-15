#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB(void)
{

}

std::string HumanB::getName(void) const
{
    return (_name);
}

void HumanB::setName(std::string name)
{
    this->_name = name;
}

Weapon* HumanB::getWeapon(void) const
{
    return (this->_weapon);
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
    if (this->_weapon == NULL)
    {
        std::cout << getName() << " has no weapon. " << std::endl;
        return ;
    }
	std::cout <<  getName() << " attacks with their " << this->_weapon->getType() << std::endl;	
}
