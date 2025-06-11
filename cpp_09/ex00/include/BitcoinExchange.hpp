#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# define RED "\033[0;38;5;196m"
# define BOLD "\033[1m"
# define END "\033[0m"

# include <iostream>
# include <fstream>
# include <sstream>
# include <map>
# include <string>
# include <iomanip>
# include <cctype>
# include <algorithm>
# include <limits>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _data;

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const& other);
		BitcoinExchange& operator=(BitcoinExchange const& other);
		~BitcoinExchange();

		void convert(char* str);
};

#endif