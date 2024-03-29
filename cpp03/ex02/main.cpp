#include "FragTrap.hpp"


int main(void)
{
    FragTrap scavTrapA("Bit Warrior");
    FragTrap scavTrapB = scavTrapA;


    scavTrapB.setName("Mega Clone");
    scavTrapA.setAttackDamage(1);
    scavTrapB.setAttackDamage(2);
    scavTrapA.attack(scavTrapB.getName());
    scavTrapB.takeDamage(scavTrapA.getAttackDamage());
    std::string speak = "Frag " + scavTrapA.getName() + ", goes up to level 2, now has 5 attack damage.";
    scavTrapA.speak(speak);
    scavTrapA.setAttackDamage(5);
    scavTrapB.attack(scavTrapA.getName());
    scavTrapA.takeDamage(scavTrapB.getAttackDamage());
    speak = "Frag " + scavTrapB.getName() + ", goes up to level 2, now has 7 attack damage.";
    scavTrapB.speak(speak);
    scavTrapB.setAttackDamage(7);
    scavTrapA.attack(scavTrapB.getName());
    scavTrapB.takeDamage(scavTrapB.getAttackDamage());
    scavTrapA.beRepaired(3);
    speak = "Frag " + scavTrapA.getName() + ", goes up to level 3, now has 10 attack damage.";
    scavTrapA.speak(speak);
    scavTrapA.setAttackDamage(10);
    scavTrapA.attack(scavTrapB.getName());
    scavTrapB.takeDamage(scavTrapA.getAttackDamage());
    scavTrapB.attack(scavTrapA.getName());
    scavTrapA.highFivesGuys();
    
    return (0);
}