#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *headZombie = new Zombie(name);
	headZombie->announce();
	return new Zombie(name);
}