#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hitPoint(10), energyPoint(10), AttackDamage(0)
{
	std::cout << "\033[0;33m" << "Default constructor called." << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string string): name(string), hitPoint(10), energyPoint(10), AttackDamage(0)
{
	std::cout << "\033[0;33m" << "std::string Constructor called." << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hitPoint(other.hitPoint), energyPoint(other.energyPoint), AttackDamage(other.AttackDamage)
{
	std::cout << "\033[0;33m" << "Copy constructor called." << "\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[91m" << "Destructor called." << "\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
		this->name = other.name;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		this->energyPoint--;
		std::cout << "\033[1m" << this->name << " attack " << target << ", causing " << this->AttackDamage << " points of damage." << "\033[0m" << std::endl;
	}
	else if (this->energyPoint <= 0)
		std::cout << "\033[1m" << this->name << " doesn't have enough energy for attack." << "\033[0m" << std::endl;
	else if (this->hitPoint <= 0)
		std::cout << "\033[1m" << this->name << "doesn't have enough health point for attack." << "\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > 0)
	{
		if (this->hitPoint <= amount)
		{
			this->hitPoint = 0;
			std::cout << "\033[1m" << this->name << " died as a result of your violence. (health points: 0)" << "\033[0m" << std::endl;
		}
		else
		{
			this->hitPoint -= amount;
			std::cout << "\033[1m" << this->name << " has " << this->hitPoint << " health points left." << "\033[0m" << std::endl;
		}
	}
	else if  (this->hitPoint == 0)
		std::cout << "\033[1m" << this->name << " is already dead, please stop harping." << "\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		this->energyPoint -= 1;
		this->hitPoint += amount;
		std::cout << "\033[1m" << this->name << " recovered " << amount << " health points." << "\033[0m" << std::endl;
	}
	else if (this->hitPoint == 0)
		std::cout << "\033[1m" << "Sorry, " << this->name << " is dead, and we're not creating a zombie." << "\033[0m" << std::endl;
	else if (this->energyPoint == 0)
		std::cout << "\033[1m" << "Sorry, " << this->name << " has no energy points left." << "\033[0m" << std::endl;
}

std::string ClapTrap::getName(void)
{
	return name;
}

int ClapTrap::gethitPoint(void)
{
	return hitPoint;
}

int ClapTrap::getE(void)
{
	return energyPoint;
}

int ClapTrap::getAttackDamage(void)
{
	return AttackDamage;
}

void	ClapTrap::print_Trap()
{
	std::cout << "\033[92m" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << getName() << " | health point = " << gethitPoint() <<
		" | energy = " << getE() << " | attack point " << getAttackDamage() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|";
	std::cout << "\033[0m";
}