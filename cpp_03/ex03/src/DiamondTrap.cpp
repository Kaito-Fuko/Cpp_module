# include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), ScavTrap("Default"), FragTrap("Default"), name("Default")
{
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	AttackDamage = FragTrap::AttackDamage;
	std::cout << "\033[1;36m" << "DiamondTrap Default created." << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name): ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name), name(_name)
{
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	AttackDamage = FragTrap::AttackDamage;
	std::cout << "\033[1;36m" << "DiamondTrap " << _name << " created." << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other.name + "_clap_name"), ScavTrap(other), FragTrap(other), name(other.name)
{
	hitPoint = other.hitPoint;
	energyPoint = other.energyPoint;
	AttackDamage = other.AttackDamage;
	std::cout << "\033[1;36m" << "DiamondTrap " << other.name << " copy created." << "\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;36m" << "DiamondTrap " << name << " destroyed." << "\033[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
		this->name = other.name;
	return *this;
}

void	DiamondTrap::WhoAmI()
{
	if (hitPoint > 0)
		std::cout << "\033[1;36m" << "I'm Diamond " << name << " and Clap " << ClapTrap::name << ".\033[0m" << std::endl;
	else
		std::cout << "\033[1;36m" << "I'm dead" << "\033[0m" << std::endl;
}