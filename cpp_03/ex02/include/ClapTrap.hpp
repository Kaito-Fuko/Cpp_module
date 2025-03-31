#ifndef CLAPTREP_HPP
# define CLAPTREP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string 	name;
		unsigned int	pv;
		unsigned int	e;
		unsigned int	atk;

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
		int	getPv(void);
		int	getE(void);
		int	getAtk(void);
		
		void	print_Trap();
};

#endif