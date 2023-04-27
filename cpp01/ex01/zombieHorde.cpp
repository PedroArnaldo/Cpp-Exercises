#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i] = new Zombie();
		zombie[i].setName(name);
	}
	return (zombie);
}
