#include "../include/Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

std::string	Contact::getFirstName() const
{	
	return firstName;
}

std::string	Contact::getLastName() const
{	
	return lastName;
}

std::string	Contact::getNickname() const
{	
	return nickname;
}

std::string	Contact::getPhoneNumber() const
{	
	return phoneNumber;
}

std::string	Contact::getDarkestSecret() const
{	
	return darkestSecret;
}

bool	isAlphaString(const std::string& str)
{
	for (int i = 0;str[i]; i++)
		if (!std::isalpha(str[i]) && str[i] != ' ')
			return (false);
	return (true);
}

bool	isAlnumString(const std::string& str)
{
	for (int i = 0;str[i]; i++)
		if (!std::isalnum(str[i]) && str[i] != ' ')
			return (false);
	return (true);
}

bool	isDigitString(const std::string& str)
{
	for (int i = 0;str[i]; i++)
		if (!std::isdigit(str[i]) && str[i] != ' ')
			return (false);
	return (true);
}

void Contact::setFirstName()
{	
	std::string input;
	while (1)
	{
		std::cout << "Entrez le prenom : ";
		if (!(std::getline(std::cin, input)))
		{
			std::cin.clear();
			return ;
		}
		if (isAlphaString(input) && !input.empty())
		{
			firstName = input;
			break ;
		} else 
			std::cout << "retry" << std::endl;
	}
}

void Contact::setLastName()
{	
	std::string input;
	while (1)
	{
		std::cout << "Entrez le nom de famille : ";
		if (!(std::getline(std::cin, input)))
		{
			std::cin.clear();
			return ;
		}
		if (isAlphaString(input) && !input.empty())
		{
			lastName = input;
			break ;
		} else 
			std::cout << "retry" << std::endl;
	}
}

void Contact::setNickname()
{	
	std::string input;
	while (1)
	{
		std::cout << "Entrez le surnom : ";
		if (!(std::getline(std::cin, input)))
		{
			std::cin.clear();
			return ;
		}
		if (isAlnumString(input) && !input.empty())
		{
			nickname = input;
			break ;
		} else
			std::cout << "retry" << std::endl;
	}
}

void Contact::setPhoneNumber()
{	
	std::string input;
	while (1)
	{
		std::cout << "Entrez le numero de telephone : ";
		if (!(std::getline(std::cin, input)))
		{
			std::cin.clear();
			return ;
		}
		if (isDigitString(input) && !input.empty())
		{
			phoneNumber = input;
			break ;
		} else
			std::cout << "retry" << std::endl;
	}
}

void Contact::setDarkestSecret()
{	
	std::string input;
	while (1)
	{
		std::cout << "Entrez son secret le plus sombre : ";
		if (!(std::getline(std::cin, input)))
		{
			std::cin.clear();
			return ;
		}
		if (!input.empty())
		{
			darkestSecret = input;
			break ;
		} else
			std::cout << "retry" << std::endl;
	}
}

void Contact::setContact()
{
	std::string input;
	
	setFirstName();
	setLastName();
	setNickname();
	setPhoneNumber();
	setDarkestSecret();
}

void Contact::displayContact()
{
	std::cout << "Prenom : " << getFirstName() << std::endl;
	std::cout << "Nom de famille : " << getLastName() << std::endl;
	std::cout << "Surnom : " << getNickname() << std::endl;
	std::cout << "Numero de telephone : " << getPhoneNumber() << std::endl;
	std::cout << "Secret : " << getDarkestSecret() << std::endl;
}