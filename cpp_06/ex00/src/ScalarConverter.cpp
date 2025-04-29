#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include <cmath>
#include <cctype>

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

// static bool isPseudoLiteral(const std::string& str)
// {
// 	return str == "nan" || str == "+inf" || str == "-inf" ||
// 		   str == "nanf" || str == "+inff" || str == "-inff";
// }

int is(const std::string& literal)
{
	if (literal.length() == 1 && !std::isdigit(static_cast<unsigned char>(literal[0])))
		return 1;
	if (literal[literal.length() - 1] == 'f')
		return 2;
	if (literal.find('.') != std::string::npos && literal[literal.length() - 1] != 'f')
		return 3;
	else
		return 4;
}

void print(char c, float f, double d, int i)
{
	// if (isdigit(c))
		std::cout << "char : " << c << "." << std::endl;
	std::cout << "float : " << f << "f." << std::endl;
	std::cout << "double : " << d << "." << std::endl;
	std::cout << "int : " << i << "." << std::endl;
}

void isChar(char c)
{
	std::cout << c << isdigit(c) << std::endl;
	print(c, 0.123f,  0.123, c);
	print(0, 0.123f, 0.123, c);
}

void isint(int i)
{

}

void ScalarConverter::convert(const std::string& literal)
{
	// double value = 0.0;
	// bool isFloat = false;
	// bool isDouble = false;

	switch (is(literal))
	{
		case 1:
			{char c = literal[0];
			isChar(c);
			break;}
		// case 2:
		// 	isFLOAT(literal);
		// 	break;
		// case 3:
		// 	isDouble(literal);
		// 	break;
		// case 4:
		// 	isInt(literal);
		// 	break;
		default:
			break;
	}

	// try
	// {
	// 	if (literal.length() == 1 && !std::isdigit(static_cast<unsigned char>(literal[0])))
	// 	{
	// 		// Single printable char case
	// 		char c = literal[0];
	// 		value = static_cast<double>(c);
	// 	}
	// 	else if (isPseudoLiteral(literal))
	// 	{
	// 		// Handle pseudo-literals
	// 		if (literal == "nanf" || literal == "nan")
	// 			value = NAN;
	// 		else if (literal == "+inff" || literal == "+inf")
	// 			value = HUGE_VAL;
	// 		else if (literal == "-inff" || literal == "-inf")
	// 			value = -HUGE_VAL;

	// 		isFloat = (literal[literal.length() - 1] == 'f');
	// 		isDouble = !isFloat;
	// 	}
	// 	else
	// 	{
	// 		// Parse numbers
	// 		std::istringstream iss(literal);

	// 		if (literal[literal.length() - 1] == 'f')
	// 		{
	// 			std::string temp = literal.substr(0, literal.length() - 1);
	// 			std::istringstream tmpStream(temp);
	// 			float tmpFloat;
	// 			tmpStream >> tmpFloat;
	// 			value = static_cast<double>(tmpFloat);
	// 			isFloat = true;
	// 		}
	// 		else if (literal.find('.') != std::string::npos)
	// 		{
	// 			double tmpDouble;
	// 			iss >> tmpDouble;
	// 			value = tmpDouble;
	// 			isDouble = true;
	// 		}
	// 		else
	// 		{
	// 			int tmpInt;
	// 			iss >> tmpInt;
	// 			value = static_cast<double>(tmpInt);
	// 		}
	// 	}

	// 	std::cout << "char: ";
	// 	if (std::isnan(value) || value < 0 || value > 127)
	// 		std::cout << "impossible" << std::endl;
	// 	else if (std::isprint(static_cast<char>(value)))
	// 		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	// 	else
	// 		std::cout << "Non displayable" << std::endl;

	// 	std::cout << "int: ";
	// 	if (std::isnan(value) || value > static_cast<double>(std::numeric_limits<int>::max()) || value < static_cast<double>(std::numeric_limits<int>::min()))
	// 		std::cout << "impossible" << std::endl;
	// 	else
	// 		std::cout << static_cast<int>(value) << std::endl;

	// 	std::cout << "float: ";
	// 	std::cout << std::fixed << std::setprecision(7) << static_cast<float>(value) << "f" << std::endl;

	// 	std::cout << "double: ";
	// 	std::cout << std::fixed << std::setprecision(15) << value << std::endl;
	// }
	// catch (...)
	// {
	// 	std::cerr << "Error: invalid literal input." << std::endl;
	// }
}
