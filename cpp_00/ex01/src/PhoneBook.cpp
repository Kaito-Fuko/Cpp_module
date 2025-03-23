#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"
# include <cstdlib>
# include <sstream>

PhoneBook::PhoneBook() : index(0), nbContacts(0)
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::addContact()
{
    Contact newC;

    newC.setContact();
    Book[index] = newC;
	index = (index + 1) % 8;
	if (nbContacts < 8)
		nbContacts++;
}

void	printTenCarac(std::string str)
{
	std::cout << "|";
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void PhoneBook::searchContact()
{
	if (nbContacts == 0)
	{
		std::cout << "Aucun contact . Trouver vous des amis et rajouter les !" << std::endl;
		return;
	}

	std::cout << "/-------------------------------------------\\" << std::endl;
	std::cout << "|     Index|first name| last name|  nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < nbContacts; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		printTenCarac(Book[i].getFirstName());
		printTenCarac(Book[i].getLastName());
		printTenCarac(Book[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "\\-------------------------------------------/" << std::endl;

	int 		choice = 0;
	std::string input;

	std::cout << "Entrez l'index du contact souhaiter : ";
	if (!(std::getline(std::cin, input)))
	{
		std::cin.clear();
		return ;
	}
    std::stringstream ss(input);
	
	if (!(ss >> choice) || !ss.eof())
	{
		std::cout << "Error: invalid index" << std::endl;
		return ;
	}
	if (choice < 1 || choice > nbContacts)
	{
		std::cout << "Error: invalid index" << std::endl;
		return ;
	}
	Book[choice - 1].displayContact();
}
