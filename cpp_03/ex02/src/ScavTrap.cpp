#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Default")
{
	hitPoint = 100;
	e = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	hitPoint = 100;
	e = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other):  ClapTrap(other)
{
	hitPoint = 100;
	e = 50;
	AttackDamage = 20;
	std::cout << "\033[0;33m" << "Copy constructor called." << "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[91m" << "ScavTrap Destructor called." << "\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		this->name = other.name;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getE() > 0 && this->gethitPoint() > 0)
	{
		e -= 1;
		std::cout << "\033[93m" << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage." << "\033[0m" << std::endl;
	}
	else if (this->getE() <= 0)
		std::cout << "\033[93m" << "ScavTrap " << this->getName() << " doesn't have enough energy for attack." << "\033[0m" << std::endl;
	else if (this->gethitPoint() <= 0)
		std::cout << "\033[93m" << "ScavTrap " << this->getName() << "doesn't have enough health point for attack." << "\033[0m" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "\033[93m" << "ScavTrap " << name << " is now in Gate keeper mode." << "\033[0m" << std::endl;
}