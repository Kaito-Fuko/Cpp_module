#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Default")
{
	std::cout << "WrongAnimal Default created" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string _type): type(_type)
{
	std::cout << "WrongAnimal " << _type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type)
{
	std::cout << "WrongAnimal " << other.type << " copy created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << type << " destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong ..." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return type;
}