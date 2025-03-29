#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default")
{
	pv = 100;
	e = 100;
	atk = 30;
	std::cout << "\033[1m" << "FragTrap Default constructor" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	pv = 100;
	e = 100;
	atk = 30;
	std::cout << "\033[1m" << "FragTrap " << name <<" created" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	pv = 100;
	e = 100;
	atk = 30;
	std::cout << "\033[1m" << "FragTrap" << other.name << "Copy constructor called." << "\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[91m" << "FragTrap Destructor called." << "\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << name << " give you high five." << std::endl;
}