#include "../include/HumanA.hpp"
#include "../include/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	std::cout << name << " is born with " << weapon.getType() << std::endl;
	this->weapon = weapon.getType();
}

HumanA::~HumanA()
{
	std::cout << "HumanA is died" << std::endl;
}

void	HumanA::attack()
{
	std::cout << "HumanA attack with " << weapon << std::endl;
}