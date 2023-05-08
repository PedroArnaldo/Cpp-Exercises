#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	int		numberZombie;

	numberZombie = 10;
	zombie = zombieHorde(numberZombie, "zombieTeste");
	for (int i = 0; i < numberZombie; i++)
	{
		std::cout << zombie->getName() << " " << i << std::endl;
	}
	delete[] zombie;
	return (0);
}
