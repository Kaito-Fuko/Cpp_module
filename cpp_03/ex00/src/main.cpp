#include "../include/ClapTrap.hpp"


int main()
{
	ClapTrap bob("Max");
	ClapTrap jim("Krys");
	ClapTrap sans(jim);
	ClapTrap rien;


	bob.print_Trap();
	jim.print_Trap();
	sans.print_Trap();
	std::cout << std::endl;
	
	bob.attack(jim.getName());
	jim.attack(bob.getName());

	bob.print_Trap();
	jim.print_Trap();
	std::cout << std::endl;

	bob.takeDamage(16);
	jim.takeDamage(3);

	bob.print_Trap();
	jim.print_Trap();
	std::cout << std::endl;

	bob.takeDamage(16);
	jim.takeDamage(3);

	bob.print_Trap();
	jim.print_Trap();
	std::cout << std::endl;

	bob.beRepaired(10);
	jim.beRepaired(6);

	bob.print_Trap();
	jim.print_Trap();
	std::cout << std::endl;

	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);

	bob.print_Trap();
	jim.print_Trap();
	rien.print_Trap();
	std::cout << std::endl;	
}