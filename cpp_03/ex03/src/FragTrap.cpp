#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default")
{
	pv = 100;
	e = 100;
	atk = 30;
	std::cout << "\033[1m" << "FragTrap Default created." << "\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	pv = 100;
	e = 100;
	atk = 30;
	std::cout << "\033[1m" << "FragTrap " << name <<" created." << "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	pv = other.pv;
	e = other.e;
	atk = other.atk;
	std::cout << "\033[1m" << "FragTrap" << other.name << " Copy created." << "\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1m" << "FragTrap " << name << " destroyed." << "\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[1m" << name << " give you a high five." << "\033[0m" << std::endl;
}