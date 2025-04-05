#include "../include/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat;
		Bureaucrat bureaucrat1("Jim", 60);
		std::cout << bureaucrat1 << std::endl;
		Bureaucrat bureaucrat2("Nanami", 0);
		std::cout << bureaucrat2 << std::endl;
		Bureaucrat bureaucrat3("Bob", 152);
		std::cout << bureaucrat3 << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << '\n';
	}
	
}