#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    *this = obj;
}

ClapTrap::~ClapTrap(void)
{
}

ClapTrap &ClapTrap::operator=(ClapTrap const  &obj)
{
    
}

void ClapTrap::attack(const std::string &target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoint(int hitPoint)
{
    this->_hitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint()
{
    
}

void ClapTrap::setAttackDamage()
{

}