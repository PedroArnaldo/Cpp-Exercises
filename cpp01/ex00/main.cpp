#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("Teste00");
	zombie->announce();
	randomChump("Teste01");
	delete zombie;
	return (0);
}
