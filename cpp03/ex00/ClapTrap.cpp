#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
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
