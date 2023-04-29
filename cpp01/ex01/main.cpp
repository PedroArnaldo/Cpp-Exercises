#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = zombieHorde(4, "zombieTeste");
	for (int i = 0; i < 4; i++)
	{
		std::cout << zombie->getName() << " " << i << std::endl;
	}
	delete[] zombie;
	return (0);
}
