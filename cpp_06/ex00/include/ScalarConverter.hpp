#ifndef SCALARCONVETER_HPP
# define SCALARCONVETER_HPP

# include <string>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

	public:

		static void convert(const std::string& literal);
};

#endif