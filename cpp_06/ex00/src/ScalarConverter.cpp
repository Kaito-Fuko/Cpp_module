#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>
#include <cmath>
#include <cctype>
#include <climits>

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }
ScalarConverter::~ScalarConverter() {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }

static bool isPseudoLiteral(const std::string& str) {
    return str == "nan" || str == "nanf" ||
           str == "+inf" || str == "+inff" ||
           str == "-inf" || str == "-inff";
}

static double customStrToDouble(const std::string& str, bool& success) {
    success = true;
    double result = 0.0;
    bool negative = false;
    size_t i = 0;

    if (str.empty()) {
        success = false;
        return 0;
    }

    if (str[i] == '-') {
        negative = true;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    if (i >= str.length()) {
        success = false;
        return 0;
    }

    // Integer part
    while (i < str.length() && std::isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Fractional part
    if (i < str.length() && str[i] == '.') {
        i++;
        double frac = 0.0;
        double base = 0.1;
        while (i < str.length() && std::isdigit(str[i])) {
            frac += (str[i] - '0') * base;
            base *= 0.1;
            i++;
        }
        result += frac;
    }

    // Any invalid character?
    if (i != str.length()) {
        success = false;
        return 0;
    }

    if (negative)
        result = -result;

    return result;
}

void ScalarConverter::convert(const std::string& literal) {
    double value = 0.0;
    bool isFloat = false;
    bool isDouble = false;
    bool success = false;

    if (literal.length() == 1 && !std::isdigit(literal[0])) {
        value = static_cast<double>(literal[0]);
        success = true;
    }
    else if (isPseudoLiteral(literal)) {
        if (literal == "nan" || literal == "nanf")
            value = std::numeric_limits<double>::quiet_NaN();
        else if (literal == "+inf" || literal == "+inff")
            value = std::numeric_limits<double>::infinity();
        else if (literal == "-inf" || literal == "-inff")
            value = -std::numeric_limits<double>::infinity();
        success = true;
        isFloat = (literal[literal.length() - 1] == 'f');
        isDouble = !isFloat;
    }
    else {
        std::string input = literal;
        if (literal[literal.length() - 1] == 'f') {
            input = literal.substr(0, literal.length() - 1);
            isFloat = true;
        } else if (literal.find('.') != std::string::npos) {
            isDouble = true;
        }

        value = customStrToDouble(input, success);
        if (!success) {
            std::cerr << "Invalid literal." << std::endl;
            return;
        }
    }

    // CHAR
    std::cout << "char: ";
    if (std::isnan(value) || value < 0 || value > 127)
        std::cout << "impossible" << std::endl;
    else if (std::isprint(static_cast<char>(value)))
        std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    // INT
    std::cout << "int: ";
    if (std::isnan(value) || value < INT_MIN || value > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(value) << std::endl;

    // FLOAT
    std::cout << "float: ";
    std::cout.precision(7);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout << static_cast<float>(value) << "f" << std::endl;

    // DOUBLE
    std::cout << "double: ";
    std::cout.precision(15);
    std::cout << value << std::endl;
}