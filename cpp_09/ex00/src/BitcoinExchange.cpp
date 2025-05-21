#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(std::map<std::string, double> data): _data(data)
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & other): _data(other._data)
{}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange & other)
{
	if (this != &other)
	{
		_data = other._data;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

void	BitcoinExchange::convert()
{
	
}