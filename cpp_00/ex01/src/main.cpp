#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

int main()
{
	PhoneBook phoneBook;
	Contact contact;
	std::string command;

	while (1)
	{
		std::cout << "Entrez ADD, SEARCH ou EXIT : ";
		
		if (!(std::getline(std::cin, command)))
		{
			std::cin.clear();
			return (1);
		}

		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}