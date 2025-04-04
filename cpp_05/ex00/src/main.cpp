#include "../include/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat1(20);
		Bureaucrat bureaucrat2(0);
		Bureaucrat bureaucrat3(152);
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}