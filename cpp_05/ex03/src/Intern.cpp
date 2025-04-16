#include "../include/Intern.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern::~Intern()
{}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

Form&	Intern::makeForm(std::string name, std::string target)
{
 	Form form;

	if (name == "Robotomy")
	{
		RobotomyRequestForm Robot(target);
		return (form);
	}
	else if (name == "Shrubbery")
	{
		Form form("ShrubberyCreationForm", 145, 137);
		ShrubberyCreationForm Shrubbery(target);
		return (form);
	}
	else if (name == "President")
	{
		Form form("PresidentialPardonForm", 25, 5);
		PresidentialPardonForm President(target);
		return (form);
	}
	else
	{
		std::cout << "Sorry your ask is not avaible." << std::endl;
		Form form;
		return (form);
	}
}


































































