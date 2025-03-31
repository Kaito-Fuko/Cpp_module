#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"


int main()
{
	FragTrap bob("Max");
	FragTrap jim("Krys");
	FragTrap sans = jim;
	FragTrap rien;

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
	bob.highFivesGuys();
	jim.beRepaired(6);

	bob.print_Trap();
	jim.print_Trap();
	rien.print_Trap();
	std::cout << std::endl;
}