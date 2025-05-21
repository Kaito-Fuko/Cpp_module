# include "../include/BitcoinExchange.hpp"

void init(char *str)
{
	
}

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "You forget the file";
		return 1;
	}
	init(av[1]);
	return 0;
}