#include "../include/DiamondTrap.hpp"

int main()
{
	DiamondTrap bob("IronMan");
	DiamondTrap jim("Krys");

	bob.print_Trap();
	jim.print_Trap();
	std::cout << std::endl;

	bob.attack("Krys");
	jim.attack("IronMan");
	bob.WhoAmI();
	std::cout << std::endl;
}