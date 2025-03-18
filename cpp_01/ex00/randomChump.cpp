#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
