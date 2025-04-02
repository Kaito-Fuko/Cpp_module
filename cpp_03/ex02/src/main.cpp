#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    // Création d'instances ClapTrap
    ClapTrap trap1("Robot1");
    ClapTrap trap2("Robot2");
    
    // Affichage des informations initiales
    std::cout << "\nÉtat initial :" << std::endl;
    trap1.print_Trap();
    trap2.print_Trap();

    // Test de l'attaque
    std::cout << "\nTest d'attaque :" << std::endl;
    trap1.attack(trap2.getName());
    trap2.takeDamage(trap1.getAttackDamage());
    
    // Affichage après attaque
    std::cout << "\nAprès attaque :" << std::endl;
    trap1.print_Trap();
    trap2.print_Trap();
    
    // Test de la réparation
    std::cout << "\nTest de réparation :" << std::endl;
    trap2.beRepaired(5);
    
    // Affichage après réparation
    std::cout << "\nAprès réparation :" << std::endl;
    trap2.print_Trap();
    
    // Test de la copie
    std::cout << "\nTest de copie :" << std::endl;
    ClapTrap trap3 = trap1;
    trap3.print_Trap();

    // Test de ScavTrap
    std::cout << "\nCréation et test de ScavTrap :" << std::endl;
    ScavTrap scav1("GuardBot");
    scav1.print_Trap();

    // ScavTrap attaque
    std::cout << "\nTest d'attaque de ScavTrap :" << std::endl;
    scav1.attack(trap1.getName());
    trap1.takeDamage(scav1.getAttackDamage());

    // Affichage après attaque
    std::cout << "\nAprès attaque de ScavTrap :" << std::endl;
    scav1.print_Trap();
    trap1.print_Trap();

    // Test de la garde de portail
    std::cout << "\nTest du mode garde de ScavTrap :" << std::endl;
    scav1.guardGate();
    
    // Test de FragTrap
    std::cout << "\nCréation et test de FragTrap :" << std::endl;
    FragTrap frag1("BoomBot");
    frag1.print_Trap();

    // FragTrap attaque
    std::cout << "\nTest d'attaque de FragTrap :" << std::endl;
    frag1.attack(trap2.getName());
    trap2.takeDamage(frag1.getAttackDamage());

    // Affichage après attaque
    std::cout << "\nAprès attaque de FragTrap :" << std::endl;
    frag1.print_Trap();
    trap2.print_Trap();

    // Test du high five
    std::cout << "\nTest du High Five de FragTrap :" << std::endl;
    frag1.highFivesGuys();
    
    return 0;
}


// int main()
// {
// 	FragTrap bob("Max");
// 	FragTrap jim("Krys");
// 	FragTrap sans = jim;
// 	FragTrap rien;

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

// 	bob.takeDamage(90);
// 	jim.takeDamage(3);

// 	bob.print_Trap();
// 	jim.print_Trap();
// 	std::cout << std::endl;

// 	bob.beRepaired(10);
// 	bob.highFivesGuys();
// 	jim.beRepaired(6);

// 	bob.print_Trap();
// 	jim.print_Trap();
// 	rien.print_Trap();
// 	std::cout << std::endl;
// }