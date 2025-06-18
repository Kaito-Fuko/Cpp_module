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

void	RPN::calculator(std::string input)
{
	
}

std::stack<int, std::list<int>>;