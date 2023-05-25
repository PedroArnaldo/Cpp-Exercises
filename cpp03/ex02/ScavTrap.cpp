#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Bot ScavTrap", 100, 50, 20)
{
     std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap()
{
    _name = src._name;
    _hitPoint = src._hitPoint;
    _energyPoint = src._energyPoint;
    _attackDamage = src._attackDamage;
}

ScavTrap::~ScavTrap(void)
{
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
    _name = obj._name;
    _hitPoint = obj._hitPoint;
    _energyPoint = obj._energyPoint;
    _attackDamage = obj._attackDamage;
    return (*this);
}

void ScavTrap::highFivesGuys(void)
{
    if (this->_hitPoint <= 0)
        std::cout << "ClapTrap " << this->getName() << " is dead." << std::endl;
    else if (this->_energyPoint <= 0)
        std::cout << "ClapTrap " << this->getName() << " is without energy to fight." << std::endl;
    else
        std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}