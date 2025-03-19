#include "../include/HumanA.hpp"
#include "../include/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	std::cout << name << " is born with weapon" << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA is died" << std::endl;
}

void	HumanA::attack()
{
	std::cout << "HumanA attack" << std::endl;
}