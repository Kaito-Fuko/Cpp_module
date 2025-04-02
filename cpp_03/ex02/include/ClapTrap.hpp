#ifndef CLAPTREP_HPP
# define CLAPTREP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string 	name;
		unsigned int	hitPoint;
		unsigned int	e;
		unsigned int	AttackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string string);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void);
		int	gethitPoint(void);
		int	getE(void);
		int	getAttackDamage(void);
		
		void	print_Trap();
};

#endif