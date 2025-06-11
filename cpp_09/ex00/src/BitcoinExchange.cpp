#include "../include/BitcoinExchange.hpp"

double toDouble(const std::string& s)
{
	std::stringstream ss(s);
	double result;
	ss >> result;
	return result;
}

int toInt(const std::string& s)
{
	std::stringstream ss(s);
	int result;
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

int check(std::string& date)
{
	if (date.size() != 10 || std::count(date.begin(), date.end(), '-') != 2)
	{
		std::cout << RED "Error: Wrong format: " << BOLD << date << RED " or I want YYYY-MM-DD" END << std::endl;
		return 1;
	}

	int year = toInt(date.substr(0, 4));
	int month = toInt(date.substr(5, 2));
	int day = toInt(date.substr(8, 2));

	if (year < 0)
	{
		std::cout << RED "Error: invalid year: " 
			<< BOLD << year << RED "-" << month << "-" << day << END << std::endl;
		return 1;
	}

	if (month < 1 || month > 12)
	{
		std::cout << RED "Error: invalid month: " 
			<< year << "-" << BOLD << month << RED "-" << day << END << std::endl;
		return 1;
	}

	bool leapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    int daysInMonth[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (leapYear)
	{
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1])
    {
        std::cerr << RED "Error: invaid day: " 
			<< year << "-" << month << "-" << BOLD << day << END << std::endl;
		return 1;
    }

	return 0;
}

void	BitcoinExchange::convert(char* str)
{
	std::ifstream file(str);
	if (!file)
	{
		std::cout << RED "Error: invalid file." END << std::endl;
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
			if (check(date))
			{
				continue;
			}
			
			if (toDouble(value) > 1000 || toInt(value) < 0)
			{
				std::cout << RED "Error: invalid number: " << date << " | " << BOLD << value << END << std::endl;
				continue;
			}

			if (!_data[date])
			{
				std::cout << "a faire ";
			}
			std::cout << date << " => " << _data[date] << " = " << _data[date] * toDouble(value) << std::endl;
		}
	}
}