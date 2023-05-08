#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon(void);
		~Weapon(void);
		std::string getName(void);
		void setName(std::string name);
}
#endif
