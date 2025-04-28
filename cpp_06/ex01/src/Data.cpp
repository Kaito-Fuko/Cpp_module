# include "../include/Data.hpp"

Data::Data(): _name(0)
{}

Data::Data(std::string name): _name(name)
{}

Data::Data(const Data& other): _name(other._name)
{}

Data& Data::operator=(const Data& other)
{
	if (this != &other)
		_name = other._name;
	return *this;
}

Data::~Data()
{}