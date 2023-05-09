#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon(void);
		~Weapon(void);
		std::string getType(void) const;
		void setType(std::string type);
}
#endif
