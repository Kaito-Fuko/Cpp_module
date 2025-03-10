#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	// PhoneBook phoneBook;
	Contact contact;
	std::string command;

	while (1)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			contact.setContact();
		// 	phoneBook.addContact();
		else if (command == "SEARCH")
			contact.displayContact();
		// 	phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}