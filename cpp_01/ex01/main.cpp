#include "Zombie.hpp"

int main()
{
	Zombie* ZombieHorde = zombieHorde(5, "zombieHorde");
	delete ZombieHorde;
	
	return 0;
}