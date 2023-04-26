#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie zombie = Zombie("Test - Zombie");

	std::cout << "Teste" << std::endl;

	zombie.announce();
	return (0);
}
