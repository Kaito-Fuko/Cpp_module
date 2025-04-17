#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

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

Form*	Intern::makeForm(std::string name, std::string target)
{
	int index = -1;
	std::string form_is[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
		if (form_is[i] == name)
			index = i;

	switch (index)
	{
		case 0:
		{
			Form* form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << *form << std::endl;
			delete form;
			return new ShrubberyCreationForm(target);
		}
		case 1:
		{
			Form* form = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << *form << std::endl;
			delete form;
			return new RobotomyRequestForm(target);
		}
		case 2:
		{
			Form* form = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << *form << std::endl;
			delete form;
			return new PresidentialPardonForm(target);
		}
		default:
			std::cout << "Sorry your ask is not avaible." << std::endl;
			return NULL;
	}
	return NULL;
}
