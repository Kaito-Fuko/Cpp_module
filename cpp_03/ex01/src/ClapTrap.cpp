#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), pv(10), e(10), atk(0)
{
	std::cout << "\033[0;33m" << "ClapTrap Default created." << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string string): name(string), pv(10), e(10), atk(0)
{
	std::cout << "\033[0;33m" << "ClapTrap " << name << " created." << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), pv(other.pv), e(other.e), atk(other.atk)
{
	std::cout << "\033[0;33m" << "ClapTrap " << other.name << "Copy created." << "\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[0;33m" << "ClapTrap " << name << " destroyed." "\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
		this->name = other.name;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->e > 0 && this->pv > 0)
	{
		this->e--;
		std::cout << "\033[0;33m" << this->name << " attack " << target << ", causing " << this->atk << " points of damage." << "\033[0m" << std::endl;
	}
	else if (this->e <= 0)
		std::cout << "\033[0;33m" << this->name << " doesn't have enough energy for attack." << "\033[0m" << std::endl;
	else if (this->pv <= 0)
		std::cout << "\033[0;33m" << this->name << " doesn't have enough health point for attack." << "\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->pv > 0)
	{
		if (this->pv < amount)
			this->pv = 0;
		else
			this->pv -= amount;
		std::cout << "\033[0;33m" << this->name << " has " << this->pv << " health points left." << "\033[0m" << std::endl;
	}
	else if  (this->pv == 0)
		std::cout << "\033[0;33m" << this->name << " is already dead, please stop harping." << "\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->e > 0 && this->pv > 0)
	{
		this->e -= 1;
		this->pv += amount;
		std::cout << "\033[0;33m" << this->name << " recovered " << amount << " health points." << "\033[0m" << std::endl;
	}
	else if (this->pv == 0)
		std::cout << "\033[0;33m" << "Sorry, " << this->name << " is dead, and we're not creating a zombie." << "\033[0m" << std::endl;
	else if (this->e == 0)
		std::cout << "\033[0;33m" << "Sorry, " << this->name << " has no health points left." << "\033[0m" << std::endl;
}

std::string ClapTrap::getName(void)
{
	return name;
}

int ClapTrap::getPv(void)
{
	return pv;
}

int ClapTrap::getE(void)
{
	return e;
}

int ClapTrap::getAtk(void)
{
	return atk;
}