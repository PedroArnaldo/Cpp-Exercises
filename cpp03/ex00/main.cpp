#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap clapTrapA("Bit Warrior");
    ClapTrap clapTrapB = clapTrapA;


    clapTrapB.setName("Mega Clone");
    clapTrapA.setAttackDamage(1);
    clapTrapB.setAttackDamage(2);
    clapTrapA.attack(clapTrapB.getName());
    clapTrapB.takeDamage(clapTrapA.getAttackDamage());
    std::string speak = "Clap " + clapTrapA.getName() + ", goes up to level 2, now has 5 attack damage.";
    clapTrapA.speak(speak);
    clapTrapA.setAttackDamage(5);
    clapTrapB.attack(clapTrapA.getName());
    clapTrapA.takeDamage(clapTrapB.getAttackDamage());
    speak = "Clap " + clapTrapB.getName() + ", goes up to level 2, now has 7 attack damage.";
    clapTrapB.speak(speak);
    clapTrapB.setAttackDamage(7);
    clapTrapA.attack(clapTrapB.getName());
    clapTrapB.takeDamage(clapTrapB.getAttackDamage());
    clapTrapA.beRepaired(3);
    speak = "Clap " + clapTrapA.getName() + ", goes up to level 3, now has 10 attack damage.";
    clapTrapA.speak(speak);
    clapTrapA.setAttackDamage(10);
    clapTrapA.attack(clapTrapB.getName());
    clapTrapB.takeDamage(clapTrapA.getAttackDamage());
    clapTrapB.attack(clapTrapA.getName());  
    return (0);
}
