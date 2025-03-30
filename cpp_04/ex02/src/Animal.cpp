#include "../include/Animal.hpp"

Animal::Animal(): type("Default")
{
	std::cout << "Animal Default created" << std::endl;
}

Animal::Animal(const Animal& other): type(other.type)
{
	std::cout << "Animal " << other.type << " copy created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << type << " destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string	Animal::getType() const
{
	return type;
}