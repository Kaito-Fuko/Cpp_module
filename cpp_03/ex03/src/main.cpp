#include "../include/DiamondTrap.hpp"

int main()
{
    // Test de DiamondTrap
    std::cout << "\nCréation et test de DiamondTrap :" << std::endl;
    DiamondTrap diamond("UltimateBot");
    diamond.print_Trap();

    // DiamondTrap attaque
    std::cout << "\nTest d'attaque de DiamondTrap :" << std::endl;
    diamond.attack("Ennemi1");

    // Test de WhoAmI
    std::cout << "\nTest de WhoAmI de DiamondTrap :" << std::endl;
    diamond.WhoAmI();
	std::cout << std::endl;
    
    return 0;
}

// int main()
// {
// 	DiamondTrap bob("IronMan");
// 	DiamondTrap jim("Krys");

// 	bob.print_Trap();
// 	jim.print_Trap();
// 	std::cout << std::endl;

// 	bob.attack("Krys");
// 	jim.attack("IronMan");
// 	bob.WhoAmI();
// 	std::cout << std::endl;
// }