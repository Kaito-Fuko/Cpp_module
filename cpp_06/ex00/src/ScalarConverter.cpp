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

static bool isPseudoLiteral(const std::string& str) {
    return str == "nan" || str == "+inf" || str == "-inf" ||
           str == "nanf" || str == "+inff" || str == "-inff";
}

void ScalarConverter::convert(const std::string& literal) {
    double value = 0.0;
    bool isFloat = false;
    bool isDouble = false;

    try {
        if (literal.length() == 1 && !std::isdigit(static_cast<unsigned char>(literal[0]))) {
            // Single printable char case
            char c = literal[0];
            value = static_cast<double>(c);
        }
        else if (isPseudoLiteral(literal)) {
            // Handle pseudo-literals
            if (literal == "nanf" || literal == "nan")
                value = NAN;
            else if (literal == "+inff" || literal == "+inf")
                value = HUGE_VAL;
            else if (literal == "-inff" || literal == "-inf")
                value = -HUGE_VAL;

            isFloat = (literal[literal.length() - 1] == 'f');
            isDouble = !isFloat;
        }
        else {
            // Parse numbers
            std::istringstream iss(literal);

            if (literal[literal.length() - 1] == 'f') {
                std::string temp = literal.substr(0, literal.length() - 1);
                std::istringstream tmpStream(temp);
                float tmpFloat;
                tmpStream >> tmpFloat;
                value = static_cast<double>(tmpFloat);
                isFloat = true;
            }
            else if (literal.find('.') != std::string::npos) {
                double tmpDouble;
                iss >> tmpDouble;
                value = tmpDouble;
                isDouble = true;
            }
            else {
                int tmpInt;
                iss >> tmpInt;
                value = static_cast<double>(tmpInt);
            }
        }

        // Char
        std::cout << "char: ";
        if (std::isnan(value) || value < 0 || value > 127)
            std::cout << "impossible" << std::endl;
        else if (std::isprint(static_cast<char>(value)))
            std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        // Int
        std::cout << "int: ";
        if (std::isnan(value) || value > static_cast<double>(std::numeric_limits<int>::max()) || value < static_cast<double>(std::numeric_limits<int>::min()))
            std::cout << "impossible" << std::endl;
        else
            std::cout << static_cast<int>(value) << std::endl;

        // Float
        std::cout << "float: ";
        std::cout << std::fixed << std::setprecision(7) << static_cast<float>(value) << "f" << std::endl;

        // Double
        std::cout << "double: ";
        std::cout << std::fixed << std::setprecision(15) << value << std::endl;
    }
    catch (...) {
        std::cerr << "Error: invalid literal input." << std::endl;
    }
}
