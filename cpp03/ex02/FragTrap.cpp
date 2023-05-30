#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Bot FragTrap", 100, 100, 30)
{
   std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{

}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap()
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
	this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & src)
{
    std::cout << "FragTrap Copy assigment operator called" << std::endl;
	this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energyPoint = src._energyPoint;
    this->_attackDamage = src._attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap " + this->_name + " high five guys." << std::endl;
}
