#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _data;

	public:
		BitcoinExchange();
		BitcoinExchange(std::map<std::string, double> data);
		BitcoinExchange(BitcoinExchange const& other);
		BitcoinExchange& operator=(BitcoinExchange const& other);
		~BitcoinExchange();

		void convert();
};

#endif