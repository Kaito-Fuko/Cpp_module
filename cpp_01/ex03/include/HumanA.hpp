#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string Name;
		Weapon &weapon;

	public:
		HumanA(std::string name, Weapon &_weapon);
		~HumanA();

		void	attack();
};

#endif