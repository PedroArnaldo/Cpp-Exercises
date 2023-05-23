#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage);
        ~ClapTrap( void );

        ClapTrap &operator=(ClapTrap const &obj);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void speak(std::string speaks);

        void setName(std::string name);
        void setHitPoint(int hitPoint);
        void setEnergyPoint(int energyPoint);
        void setAttackDamage(int attackDamage);

        std::string getName(void);
        int         getHitPoint(void);
        int         getEnergyPoint(void);
        int         getAttackDamage(void);
    
    protected:
        std::string _name;
        int         _hitPoint;
        int         _energyPoint;
        int         _attackDamage;
        
};

#endif
