#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("Zombie 00");
	zombie->announce();
	randomChump("Zombie 01 randomChump");
	delete zombie;
	return (0);
}
