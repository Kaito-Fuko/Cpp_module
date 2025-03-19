#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed." << std::endl;
}
