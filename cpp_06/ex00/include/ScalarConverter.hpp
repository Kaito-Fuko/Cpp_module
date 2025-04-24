#ifndef SCALARCONVETER_HPP
# define SCALARCONVETER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <limits>
# include <cmath>
# include <cctype>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

	public:
		static void convert(const std::string& literal);

		class IsTooLong: public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif