#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name): weapon(NULL)
{
	std::cout << name << " is born" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB is died" << std::endl;
}

void	HumanB::attack()
{
	std::cout << "HumanB attack with " << (*weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	std::cout << "HumanB have " << this->weapon->getType() << std::endl;
}
