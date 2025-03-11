#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "contact is create" << std::endl;
}

Contact::~Contact()
{
	std::cout << "contact is destroy" << std::endl;
}

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
		std::getline(std::cin, input);
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
		std::getline(std::cin, input);
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
		std::getline(std::cin, input);
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
		std::getline(std::cin, input);
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
		std::getline(std::cin, input);
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

void	printTenCarac(std::string str)
{
	std::cout << "|";
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void Contact::displayContact()
{
	std::cout << "/------------------------------------------------------\\" << std::endl;
	std::cout << "|first name| last name|  nickname|    number|    secret|" << std::endl;
	std::cout << "|------------------------------------------------------|" << std::endl;
	printTenCarac(getFirstName());
	printTenCarac(getLastName());
	printTenCarac(getNickname());
	printTenCarac(getPhoneNumber());
	printTenCarac(getDarkestSecret());
	std::cout << "|" << std::endl;
	std::cout << "\\------------------------------------------------------/" << std::endl;
}