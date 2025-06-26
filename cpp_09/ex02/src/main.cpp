#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << RED << "Error: Wrong input." << END << std::endl;
		return 1;
	}

	try
	{
		PmergeMe test(ac, av);
		test.timer();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << '\n';
	}
	

	return 0;
}