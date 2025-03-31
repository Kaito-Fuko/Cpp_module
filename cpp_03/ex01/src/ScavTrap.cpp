#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Default")
{
	pv = 100;
	e = 50;
	atk = 20;
	std::cout << "\033[93m" << "ScavTrap Default created!" << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	pv = 100;
	e = 50;
	atk = 20;
	std::cout << "\033[93m" << "ScavTrap " << name << " created!" << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other):  ClapTrap(other)
{
	pv = other.pv;
	e = other.e;
	atk = other.atk;
	std::cout << "\033[93m" << "ScavTrap" << other.name << "Copy created." << "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[93m" << "ScavTrap " << name << " destroyed." << "\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		this->name = other.name;
	return *this;
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

void	ScavTrap::guardGate()
{
	std::cout << "\033[93m" << "ScavTrap " << name << " is now in Gate keeper mode." << "\033[0m" << std::endl;
}