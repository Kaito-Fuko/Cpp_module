#include "../include/ClapTrap.hpp"


int main()
{
	ClapTrap bob("Max");
	ClapTrap jim("Krys");
	ClapTrap sans = jim;
	ClapTrap rien;


	std::cout << "\033[92m" << "\n|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << bob.getName() << " | health point = " << bob.getPv() <<
		" | energy = " << bob.getE() << " | attack point " << bob.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << jim.getName() << " | health point = " << jim.getPv() <<
		" | energy = " << jim.getE() << " | attack point " << jim.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << sans.getName() << " | health point = " << sans.getPv() <<
	" | energy = " << sans.getE() << " | attack point " << sans.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << "\033[0m" << std::endl << std::endl;
	
	bob.attack(jim.getName());
	jim.attack(bob.getName());

	std::cout << "\033[92m" << "\n|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << bob.getName() << " | health point = " << bob.getPv() <<
		" | energy = " << bob.getE() << " | attack point " << bob.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << jim.getName() << " | health point = " << jim.getPv() <<
		" | energy = " << jim.getE() << " | attack point " << jim.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << "\033[0m" << std::endl << std::endl;

	bob.takeDamage(16);
	jim.takeDamage(3);

	std::cout << "\033[92m" << "\n|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << bob.getName() << " | health point = " << bob.getPv() <<
		" | energy = " << bob.getE() << " | attack point " << bob.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << jim.getName() << " | health point = " << jim.getPv() <<
		" | energy = " << jim.getE() << " | attack point " << jim.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << "\033[0m" << std::endl << std::endl;

	bob.takeDamage(16);
	jim.takeDamage(3);

	std::cout << "\033[92m" << "\n|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << bob.getName() << " | health point = " << bob.getPv() <<
		" | energy = " << bob.getE() << " | attack point " << bob.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << jim.getName() << " | health point = " << jim.getPv() <<
		" | energy = " << jim.getE() << " | attack point " << jim.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << "\033[0m" << std::endl << std::endl;

	bob.beRepaired(10);
	jim.beRepaired(6);

	std::cout << "\033[92m" << "\n|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << bob.getName() << " | health point = " << bob.getPv() <<
		" | energy = " << bob.getE() << " | attack point " << bob.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << jim.getName() << " | health point = " << jim.getPv() <<
		" | energy = " << jim.getE() << " | attack point " << jim.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << "\033[0m" << std::endl << std::endl;

	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);
	jim.beRepaired(1);

	std::cout << "\033[92m" << "\n|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << bob.getName() << " | health point = " << bob.getPv() <<
		" | energy = " << bob.getE() << " | attack point " << bob.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << jim.getName() << " | health point = " << jim.getPv() <<
		" | energy = " << jim.getE() << " | attack point " << jim.getAtk() << ".|" << std::endl;
		std::cout << "|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << sans.getName() << " | health point = " << sans.getPv() <<
	" | energy = " << sans.getE() << " | attack point " << sans.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << std::endl << std::endl;

	std::cout << "\n|--------------------------------------------------------------------------------------|" << std::endl;
	std::cout << "| name = " << rien.getName() << " | health point = " << rien.getPv() <<
		" | energy = " << rien.getE() << " | attack point " << rien.getAtk() << ".|" << std::endl;
	std::cout << "|--------------------------------------------------------------------------------------|" << "\033[0m" << std::endl;
}