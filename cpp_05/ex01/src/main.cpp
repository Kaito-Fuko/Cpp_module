#include "../include/Bureaucrat.hpp"

int main()
{
	try
	{
		From from;
		std::cout << from << std::endl;
		From from1("49.3", 0, 10, 1);
		std::cout << from1 << std::endl;
		Bureaucrat bureaucrat("Elisa", 1);
		bureaucrat.signFrom(from1);
		Bureaucrat bureaucrat1("lfi", 20);
		bureaucrat1.signFrom(from1);
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}
	
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
	// catch(const std::string& e)
	// {
	// 	std::cerr << e << std::endl;
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