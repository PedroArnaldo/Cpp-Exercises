#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("default_clap_name")
{
	std::cout << "Default constructor called of DimondTrap" << std::endl;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "Name constructor called of DimondTrap" << std::endl;
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src._name)
{
	std::cout << "Copie constructor called of DimondTrap" << std::endl;
	_name = src._name;
	_hitPoint = src.FragTrap::_hitPoint;
	_energyPoint = src.ScavTrap::_energyPoint;
	_attackDamage = src.FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called of DimondTrap" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << "Assigment opperator called of DimondTrap" << std::endl;
	ClapTrap::_name = src._name + "_clap_name";
	_hitPoint = src.FragTrap::_hitPoint;
	_energyPoint = src.ScavTrap::_energyPoint;
	_attackDamage = src.FragTrap::_attackDamage;
	return *this;
}

void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "whoAmi(): DiamondTrap, my name: " << _name << ", claptrap name: " << ClapTrap::_name << std::endl;
}

std::ostream &operator<<(std::ostream &os, DiamondTrap &obj)
{
	os << "Name: " + obj.getName();
	os << "HitPoint: " + obj.getHitPoint();

	return os;
}