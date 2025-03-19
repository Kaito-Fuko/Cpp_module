#include "Zombie.hpp"

int main()
{
	int N = 5;

	Zombie* ZombieHorde = zombieHorde(N, "zombieHorde");
 	
	for (int i = 0; i < N; i++)
		ZombieHorde[i].announce();
	delete[] ZombieHorde;
	
	return 0;
}