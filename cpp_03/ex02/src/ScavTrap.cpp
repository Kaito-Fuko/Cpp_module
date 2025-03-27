#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Default")
{
	pv = 100;
    e = 50;
    atk = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	pv = 100;
    e = 50;
    atk = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[91m" << "ScavTrap Destructor called." << "\033[0m" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getE() > 0 && this->getPv() > 0)
	{
		e -= 1;
		std::cout << "\033[93m" << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getAtk() << " points of damage." << "\033[0m" << std::endl;
	}
	else if (this->getE() <= 0)
		std::cout << "\033[93m" << "ScavTrap " << this->getName() << " doesn't have enough energy for attack." << "\033[0m" << std::endl;
	else if (this->getPv() <= 0)
		std::cout << "\033[93m" << "ScavTrap " << this->getName() << "doesn't have enough health point for attack." << "\033[0m" << std::endl;
}