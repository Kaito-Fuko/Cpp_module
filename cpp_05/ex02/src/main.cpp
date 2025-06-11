#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main()
{
	std::srand(std::time(NULL));
	try 
	{
        Bureaucrat bob("Bob", 1);
        ShrubberyCreationForm form("garden");

        std::cout << "Signing the form..." << std::endl;
        form.beSigned(bob);

        std::cout << "Executing the form..." << std::endl;
		bob.executeForm(const_cast<const ShrubberyCreationForm&>(form));

        std::cout << "Shrubbery has been created in 'garden_shrubbery'!" << std::endl;

		std::cout << std::endl;

		RobotomyRequestForm Robot("Jarvis");
		std::cout << "Signing the form..." << std::endl;
        Robot.beSigned(bob);

        std::cout << "Executing the form..." << std::endl;
        Robot.execute(const_cast<const Bureaucrat&>(bob));

		std::cout << std::endl;

		PresidentialPardonForm President("Mark");
		std::cout << "Signing the form..." << std::endl;
        President.beSigned(bob);

        std::cout << "Executing the form..." << std::endl;
        President.execute(const_cast<const Bureaucrat&>(bob));
		
		std::cout << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << "Error: " << e.what() << std::endl;
    }

	// try
	// {
	// 	Form form1("49.3", 10, 1);
	// 	std::cout << form1 << std::endl;
	// 	Bureaucrat bureaucrat("Elisa", 1);
	// 	bureaucrat.signForm(form1);
	// 	Bureaucrat bureaucrat1("lfi", 20);
	// 	bureaucrat1.signForm(form1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// try
	// {
	// 	Bureaucrat bureaucrat;
	// 	Bureaucrat bureaucrat1("Jim", 60);
	// 	std::cout << bureaucrat1 << std::endl;
	// 	Bureaucrat bureaucrat2("Nanami", 1);
	// 	std::cout << bureaucrat2 << std::endl;
	// 	Bureaucrat bureaucrat3("Bob", 152);
	// 	std::cout << bureaucrat3 << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// try
	// {
	// 	Bureaucrat bureaucrat1("Jim", 60);
	// 	std::cout << bureaucrat1 << std::endl;
	// 	bureaucrat1.decrementGrade();
	// 	std::cout << bureaucrat1 << std::endl;
	// 	bureaucrat1.incrementGrade();
	// 	std::cout << bureaucrat1 << std::endl;

	// 	Bureaucrat bureaucrat2("Nanami", 1);
	// 	std::cout << bureaucrat2 << std::endl;
	// 	bureaucrat2.incrementGrade();
	// 	std::cout << bureaucrat2 << std::endl;

	// 	Bureaucrat bureaucrat3("Bob", 150);
	// 	std::cout << bureaucrat3 << std::endl;
	// 	bureaucrat3.decrementGrade();
	// 	std::cout << bureaucrat3 << std::endl;
	// }
	// catch(const std::string& e)
	// {
	// 	std::cerr << e << std::endl;
	// }
}