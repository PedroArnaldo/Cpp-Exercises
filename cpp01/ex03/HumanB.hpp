#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;
	
	public:
		HumanB(std::string name);
	    ~HumanB(void);
        std::string getName(void) const;
		void setName(std::string name);
//		Weapon getWeapon(void) const;
		void setWeapon(Weapon& weapon);
        void attack(void) const;
};
#endif
