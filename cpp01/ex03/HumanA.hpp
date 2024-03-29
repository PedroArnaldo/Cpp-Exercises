#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;
	
	public:
		HumanA(std::string name, Weapon& weapon);
	    ~HumanA(void);
		std::string getName(void) const;
		void setName(std::string name);
		Weapon getWeapon(void) const;
		void setWeapon(const Weapon& weapon);
		void attack(void) const;
};
#endif
