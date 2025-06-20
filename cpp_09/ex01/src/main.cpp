#include "RPN.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << RED "Error: Wrong format." END << std::endl;
		return 1;
	}
	try
	{
		RPN test(av[1]);
		std::cout << test.getValue() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << '\n';
	}
	
}