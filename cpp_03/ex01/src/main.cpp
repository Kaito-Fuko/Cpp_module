#include "../include/ScavTrap.hpp"


int main()
{
	ScavTrap bob("Max");
	ScavTrap jim("Krys");
	ScavTrap sans = jim;
	ScavTrap rien;

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

	bob.takeDamage(90);
	jim.takeDamage(3);

	bob.print_Trap();
	jim.print_Trap();
	std::cout << std::endl;

	bob.beRepaired(10);
	bob.guardGate();
	jim.beRepaired(6);

	bob.print_Trap();
	jim.print_Trap();
	std::cout << std::endl;
}