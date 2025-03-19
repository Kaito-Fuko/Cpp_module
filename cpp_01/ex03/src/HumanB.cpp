#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << name << " is born" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB is died" << std::endl;
}

void	HumanB::attack()
{
	std::cout << "HumanB attack" << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon.getType();
}
