#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	(void)other;
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return *this;
}

const char* ScalarConverter::IsTooLong::what() const throw()
{
	return "Char too long";
}

void	ScalarConverter::convert(const std::string& literal)
{
	double	value = 0.0;
	bool	isFloat = false;
	bool	isDouble = false;
	try 
	{
		if (literal.length() == 1 && !std::isdigit(literal[0]))
		{
			char c = literal[0];
			value = static_cast<double>(c);
		}
		else if (isPseudoLiteral(literal))
		{
			if (literal == "nanf" || literal == "nan")
				value = std::nan("");
			else if (literal == "+inff" || literal == "+inf")
				value = std::numeric_limits<double>::infinity;
			else if (literal == "-inff" || literal == "-inf")
				value = -std::numeric_limits<double>::infinity;

			isFloat = literal.back() == 'f';
			isDouble = !isFloat;
		}
		else
		{
			if (literal.back() == 'f')
			{
				value = std::stof(literal);
				isFloat = true;
			}
			else if (literal.find('.') != std::string::npos)
			{
				value = std::stod(literal);
				isDouble = true;
			}
			else
				value = static_cast<double>(std::stoi(literal));
		}
		
	}
	catch
	{

	}
}