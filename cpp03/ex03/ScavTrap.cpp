#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Bot ScavTrap", 100, 50, 20)
{
     std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
     std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap()
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    _name = src._name;
    _hitPoint = src._hitPoint;
    _energyPoint = src._energyPoint;
    _attackDamage = src._attackDamage;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
    std::cout << "ScavTrap Copy assigment operator called" << std::endl;
    _name = obj._name;
    _hitPoint = obj._hitPoint;
    _energyPoint = obj._energyPoint;
    _attackDamage = obj._attackDamage;
    return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    if (this->_hitPoint == 0)
        std::cout << "ScavTrap " << this->getName() << " is dead." << std::endl;
    else if (this->_energyPoint == 0)
        std::cout << "ScavTrap " << this->getName() << " is without energy to fight." << std::endl;
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->_energyPoint--;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}