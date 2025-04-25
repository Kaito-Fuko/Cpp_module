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

static bool isPseudoLiteral(const std::string& str)
{
	return str == "nan" || str == "+inf" || str == "-inf" ||
			str == "nanf" || str == "+inff" || str == "-inff";
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
				value = nan("");
			else if (literal == "+inff" || literal == "+inf")
				value = std::numeric_limits<double>::infinity();
			else if (literal == "-inff" || literal == "-inf")
				value = -std::numeric_limits<double>::infinity();

			isFloat = literal[literal.length() - 1] == 'f';
			isDouble = !isFloat;
		}
		else
		{
			if (literal[literal.length() - 1] == 'f')
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
				value = static_cast<double>();
		}
		
		std::cout << "char: ";
		if (std::isnan(value) || value < 0 || value > 127)
			std::cout << "impossible" << std::endl;
		else if (std::isprint(static_cast<char>(value)))
			std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << static_cast<int>(value) << std::endl;

		std::cout << "double: ";
		std::cout << std::fixed << std::setprecision(1) << value << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: invalid literal input." << std::endl;
	}
}