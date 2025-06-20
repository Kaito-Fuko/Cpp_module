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

RPN::RPN(const RPN& other): value(other.value)
{}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		this->value = other.value;
	return *this;
}

RPN::~RPN()
{}

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
			value.push(c - '0');
		else if (value.size() == 2 && (c == '+' || c == '-' || c == '/' || c == '*'))
		{
			a = value.top();
			value.pop();
			b = value.top();
			value.pop();
			if (c == '+')
				value.push(b + a);
			if (c == '-')
				value.push(b - a);
			if (c == '/' && a != 0)
				value.push(b / a);
			if (c == '*')
				value.push(b * a);
			if (c == '/' && a == 0)
				throw std::logic_error("Error");
		}
		else
			throw std::logic_error("Error: Wrong input.");
	}
	if (value.size() != 1)
				throw std::logic_error("Error: Wrongs numbers of digit or operator");
}

int RPN::getValue()
{
	return this->value.top();
}