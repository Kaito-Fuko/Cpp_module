#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>
# include <cstdlib>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		Contact();
		~Contact();

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

		void setFirstName();
		void setLastName();
		void setNickname();
		void setPhoneNumber();
		void setDarkestSecret();

		void setContact();
		void displayContact();
};

bool	isDigitString(const std::string& str);

#endif