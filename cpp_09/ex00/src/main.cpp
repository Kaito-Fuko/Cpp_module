#include "../include/BitcoinExchange.hpp"
#include <fstream>

void init(char *str)
{
	std::ifstream data("data.csv");
	if (!data)
	{
		std::cout << "error" << std::endl;
		return ;
	}

	std::string line;
	std::map<std::string, double> dt;

	while (std::getline(data, line))
	{
		
	}

	std::ifstream input(str);
	if (!input)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
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