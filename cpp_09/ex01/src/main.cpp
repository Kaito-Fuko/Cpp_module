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
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}