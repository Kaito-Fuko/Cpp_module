#include "../include/ClapTrap.hpp"


int main()
{
    // Création d'instances ClapTrap
    ClapTrap trap1("Robot1");
    ClapTrap trap2("Robot2");
    
    // Affichage des informations initiales
    std::cout << "\nÉtat initial :" << std::endl;
    trap1.print_Trap();
    trap2.print_Trap();
	std::cout << std::endl;

    // Test de l'attaque
    std::cout << "\nTest d'attaque :" << std::endl;
    trap1.attack(trap2.getName());
    trap2.takeDamage(trap1.getAttackDamage());
    
    // Affichage après attaque
    std::cout << "\nAprès attaque :" << std::endl;
    trap1.print_Trap();
    trap2.print_Trap();
	std::cout << std::endl;
    
    // Test de la réparation
    std::cout << "\nTest de réparation :" << std::endl;
    trap2.beRepaired(5);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    trap2.beRepaired(1);
    
    // Affichage après réparation
    std::cout << "\nAprès réparation :" << std::endl;
    trap2.print_Trap();
    
    // Test de la copie
    std::cout << "\nTest de copie :" << std::endl;
    ClapTrap trap3 = trap1;
    trap3.print_Trap();
	std::cout << std::endl;
    
    return 0;
}

// int main()
// {
// 	ClapTrap bob("Max");
// 	ClapTrap jim("Krys");
// 	ClapTrap sans(jim);
// 	ClapTrap rien;


// 	bob.print_Trap();
// 	jim.print_Trap();
// 	sans.print_Trap();
// 	std::cout << std::endl;
	
// 	bob.attack(jim.getName());
// 	jim.attack(bob.getName());

// 	bob.print_Trap();
// 	jim.print_Trap();
// 	std::cout << std::endl;

// 	bob.takeDamage(16);
// 	jim.takeDamage(3);

// 	bob.print_Trap();
// 	jim.print_Trap();
// 	std::cout << std::endl;

// 	bob.takeDamage(16);
// 	jim.takeDamage(3);

// 	bob.print_Trap();
// 	jim.print_Trap();
// 	std::cout << std::endl;

// 	bob.beRepaired(10);
// 	jim.beRepaired(6);

// 	bob.print_Trap();
// 	jim.print_Trap();
// 	std::cout << std::endl;

// 	jim.beRepaired(1);
// 	jim.beRepaired(1);
// 	jim.beRepaired(1);
// 	jim.beRepaired(1);
// 	jim.beRepaired(1);
// 	jim.beRepaired(1);
// 	jim.beRepaired(1);
// 	jim.beRepaired(1);
// 	jim.beRepaired(1);

// 	bob.print_Trap();
// 	jim.print_Trap();
// 	rien.print_Trap();
// 	std::cout << std::endl;
// }