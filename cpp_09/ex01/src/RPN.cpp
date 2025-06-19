#include "RPN.hpp"

RPN::RPN(std::string input)
{
	if (input.empty())
	{
		std::cout << RED "Error: empty input." END << std::endl;
		return ;
	}
	else 
		calculator(input);
}

int check(char c)
{
	int i;
	std::stringstream(c) >> i;
}

void	RPN::calculator(std::string input)
{
	char c;
	int a;
	int b;

	for (size_t i = 0; i < input.size(); i++)
	{
		c = input[i];

		if (std::isspace(c))
			continue;
		if (std::isdigit(c))
			check(c);
	}
}

std::stack<int, std::list<int>>;