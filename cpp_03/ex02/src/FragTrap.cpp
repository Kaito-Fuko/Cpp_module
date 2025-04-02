#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default")
{
	hitPoint = 100;
	e = 100;
	AttackDamage = 30;
	std::cout << "\033[1m" << "FragTrap Default constructor" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	hitPoint = 100;
	e = 100;
	AttackDamage = 30;
	std::cout << "\033[1m" << "FragTrap " << name <<" created" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	hitPoint = 100;
	e = 100;
	AttackDamage = 30;
	std::cout << "\033[1m" << "FragTrap" << other.name << "Copy constructor called." << "\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[91m" << "FragTrap Destructor called." << "\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		this->name = other.name;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	if (hitPoint > 0)
		std::cout << "\033[1m" << name << " give you a high five." << "\033[0m" << std::endl;
	else
		std::cout << "\033[1m" << name << " is dead and a dead person doesn't give a high five, sorry" << "\033[0m" << std::endl;
}