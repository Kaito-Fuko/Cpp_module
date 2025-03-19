#include "../include/Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	std::cout << "have " << weapon << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "lost weapon" << std::endl;
}

std::string	Weapon::getType()
{
	return type;
}

void	Weapon::setType(std::string weapon)
{
	type = weapon;
}