#include "RPN.hpp"

// -------------------Constructeur------------------- //
RPN::RPN(std::string input)
{
	if (input.empty())
	{
		std::cerr << RED "Error: empty input." END << std::endl;
		return ;
	}
	else 
		calculator(input);
}

// ----------------Constructeur(copy)---------------- //
RPN::RPN(const RPN& other): value(other.value)
{}

// ------------Constructeur (assignement)------------ //
RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		this->value = other.value;
	return *this;
}

// -------------------Destructeur-------------------- //
RPN::~RPN()
{}

// -----------------------Code----------------------- //
void	RPN::calculator(std::string input)
{
	char c;
	int a;
	int b;

	for (size_t i = 0; i < input.size(); i++)
	{
		c = input[i];

		//----parsing----//
		if (std::isspace(c))
			continue;
		if (std::isdigit(c))
			value.push(c - '0');
		//----calcule----//
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

// -----------------------Get------------------------ //
int RPN::getValue()
{
	return this->value.top();
}