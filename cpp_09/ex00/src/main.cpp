#include "../include/BitcoinExchange.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cerr << "You forget the file";
		return 1;
	}
	// init(av[1]);
	BitcoinExchange test;
	test.convert(av[1]);
	return 0;
}