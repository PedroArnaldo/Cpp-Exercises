#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap( void );

        ClapTrap &operator=(ClapTrap const &obj);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setName(std::string name);
        void setHitPoint(int hitPoint);
        void setEnergyPoint(int energyPoint);
        void setAttackDamage(int attackDamage);

        std::string getName(void);
        int         getHitPoint(void);
        int         getEnergyPoint(void);
        int         getAttackDamage(void);
    
    private:
        std::string _name;
        int         _hitPoint;
        int         _energyPoint;
        int         _attackDamage;
        
};

#endif
