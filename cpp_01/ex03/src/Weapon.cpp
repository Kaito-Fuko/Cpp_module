#include "../include/Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	std::cout << "weapon is create" << std::endl;
	type = weapon;
}

Weapon::~Weapon()
{
	std::cout << "weapon is destroy" << std::endl;
}

std::string	Weapon::getType()
{
	return type;
}

void	Weapon::setType(std::string weapon)
{
	type = weapon;
	std::cout << type << std::endl;
}