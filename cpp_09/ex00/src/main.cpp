#include "../include/BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <iomanip>
#include <cctype>

void print(std::map<std::string, double> prices)
{
	std::map<std::string, double>::iterator it;

    std::cout << std::fixed << std::setprecision(2);

    for (it = prices.begin(); it != prices.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

void print2(std::map<std::string, std::string> prices)
{
	std::map<std::string, std::string>::iterator it;

    std::cout << std::fixed << std::setprecision(2);

    for (it = prices.begin(); it != prices.end(); ++it) {
        std::cout << it->first << " | " << it->second << std::endl;
    }
}

double toDouble(const std::string& s)
{
    std::stringstream ss(s);
    double result;
    ss >> result;
    return result;
}

int check(std::string str)
{
	std::stringstream ss(str);
	int res;
	ss >> res;
	std::cout << "str = ." << str << ". res = " << res << std::endl;
	if (res )
		return 1;
	return 0;
}

void init(char *str)
{
	{
	std::ifstream file("data.csv");
	if (!file)
	{
		std::cout << "error" << std::endl;
		return ;
	}

	std::string line;
	std::map<std::string, double> data;

	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string priceStr;
		std::string date;
		if (std::getline(iss, date, ',') && std::getline(iss, priceStr))
			data[date] = toDouble(priceStr);
	}
	// print(data);
	file.close();
	}
	
	std::ifstream input(str);
	if (!input)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	
	std::string line;
	std::map<std::string, std::string> in;
	
	while (std::getline(input, line))
	{
		std::istringstream iss(line);
		std::string priceStr;
		std::string date;
		if (std::getline(iss, date, '|') && std::getline(iss, priceStr))
		{
			if (!check(priceStr))
				in[date] = "Error: invalid number.";
			in[date] = priceStr;
		}
		// std::cout << in[date] << std::endl;
	}
	print2(in);
	input.close();
}

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "You forget the file";
		return 1;
	}
	init(av[1]);
	return 0;
}