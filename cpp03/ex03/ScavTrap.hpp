#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
        
        public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        ScavTrap &operator=(ScavTrap const &obj);

        void attack(std::string const &target);
        void guardGate(void);
};

#endif
