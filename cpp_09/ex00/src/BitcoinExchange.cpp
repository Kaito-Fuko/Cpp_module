#include "../include/BitcoinExchange.hpp"

double toDouble(const std::string& s)
{
    std::stringstream ss(s);
    double result;
    ss >> result;
    return result;
}

void print(std::map<std::string, double> prices)
{
	std::map<std::string, double>::iterator it;

    std::cout << std::fixed << std::setprecision(2);

    for (it = prices.begin(); it != prices.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream file("data.csv");
	if (!file)
	{
		std::cout << "Error: invalid file." << std::endl;
		return ;
	}

	int i = 0;
	std::string line;
	// std::map<std::string, double> data;

	while (std::getline(file, line))
	{
		if (i == 0)
		{
			i++;
			continue;
		}
		std::istringstream iss(line);
		std::string priceStr;
		std::string date;
		if (std::getline(iss, date, ',') && std::getline(iss, priceStr))
			_data[date] = toDouble(priceStr);
	}
	file.close();
	print(_data);
}

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

void	BitcoinExchange::convert(char* str)
{
	std::ifstream file(str);
	if (!file)
	{
		std::cout << "Error: invalid file." << std::endl;
		return ;
	}

	int i = 0;
	std::string line;

	while (std::getline(file, line))
	{
		if (i == 0)
		{
			i++;
			continue;
		}
		std::istringstream iss(line);
		std::string date;
		std::string value;
		if (std::getline(iss, date, '|') && std::getline(iss, value))
		{
			date.erase(0, date.find_first_not_of(" \t"));
        	date.erase(date.find_last_not_of(" \t\r\n") + 1);
        	value.erase(0, value.find_first_not_of(" \t"));
        	value.erase(value.find_last_not_of(" \t\r\n") + 1);

			if (!_data[date])
			{
				std::cout << "a faire ";
			}
			std::cout << date << " le bit coin vaux: " << _data[date] << "." << std::endl;
		}
	}
}