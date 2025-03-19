#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string Name;
		std::string weapon;

	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();

		void	attack();
};

#endif