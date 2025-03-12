#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Book[8];
		int 	index;
		int 	nbContacts;
	public:
		// void addContact();
		// void searchContact();
};

#endif