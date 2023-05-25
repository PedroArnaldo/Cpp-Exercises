#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->_name = "Bot";
    this->_hitPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage): 
    _name(name),
    _hitPoint(hitPoint), 
    _energyPoint(energyPoint), 
    _attackDamage(attackDamage)
{
   std::cout << "ClapTrap set constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    this->_name = obj._name;
    this->_hitPoint = obj._hitPoint;
    this->_energyPoint = obj._energyPoint;
    this->_attackDamage = obj._attackDamage;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const  &obj)
{
    std::cout << "ClapTrap Copy assigment operator called" << std::endl;
    this->_name = obj._name;
    this->_hitPoint = obj._hitPoint;
    this->_energyPoint = obj._energyPoint;
    this->_attackDamage = obj._attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoint == 0)
        std::cout << "ClapTrap " << this->getName() << " is dead." << std::endl;
    else if (this->_energyPoint == 0)
        std::cout << "ClapTrap " << this->getName() << " is without energy to fight." << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->_energyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->getName() << " suffered " << amount << " injuries." << std::endl;
    int currentLife = this->getHitPoint() - amount;
    this->setHitPoint(currentLife);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoint == 0)
        std::cout << "ClapTrap " << this->getName() << " is dead." << std::endl;
    else if (this->_energyPoint == 0)
        std::cout << "ClapTrap " << this->getName() << " is without energy to fight." << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->getName() << " repairing, current life " << this->getHitPoint();
        this->setHitPoint(this->_hitPoint + amount);
        std::cout << ", life after repairing" << this->getHitPoint() << "." << std::endl;
        this->_energyPoint--;
    }
}

void ClapTrap::speak(std::string speaks)
{
    std::cout << "ClapTrap " << this->getName() << " " << speaks << std::endl;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoint(int hitPoint)
{
    this->_hitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(int energyPoint)
{
    this->_hitPoint = energyPoint;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}

std::string ClapTrap::getName(void)
{
    return(this->_name);
}

int        ClapTrap::getHitPoint(void)
{
    return(this->_hitPoint);
}

int      ClapTrap::getEnergyPoint(void)
{
    return(this->_energyPoint);
}

int        ClapTrap::getAttackDamage(void)
{
    return(this->_attackDamage);
}