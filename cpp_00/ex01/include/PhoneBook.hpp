#ifndef PHONEBOOK_H
#define PHONEBOOK_H

// # include <stdlib>
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
		PhoneBook();
		~PhoneBook();

		void addContact();
		void searchContact();
};

#endif