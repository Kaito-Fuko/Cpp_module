#include "../include/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat;
		Bureaucrat bureaucrat1("Jim", 60);
		std::cout << bureaucrat1 << std::endl;
		Bureaucrat bureaucrat2("Nanami", 1);
		std::cout << bureaucrat2 << std::endl;
		Bureaucrat bureaucrat3("Bob", 152);
		std::cout << bureaucrat3 << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}

	try
	{
		Bureaucrat bureaucrat1("Jim", 60);
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.decrementGrade();
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.incrementGrade();
		std::cout << bureaucrat1 << std::endl;

		Bureaucrat bureaucrat2("Nanami", 1);
		std::cout << bureaucrat2 << std::endl;
		bureaucrat2.incrementGrade();
		std::cout << bureaucrat2 << std::endl;

		Bureaucrat bureaucrat3("Bob", 150);
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.decrementGrade();
		std::cout << bureaucrat3 << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}	
	
}