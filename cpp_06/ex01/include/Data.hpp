#ifndef DATA_HPP
# define DATA_HPP

# include "Serializer.hpp"

class Serializer;

class Data
{
	private:
		std::string	_name;

	public:
		Data();
		Data(std::string	name);
		Data(const Data& other);
		Data& operator=(const Data& other);
		~Data();
};

#endif