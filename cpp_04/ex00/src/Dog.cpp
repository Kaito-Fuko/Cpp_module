#include "../include/Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "\033[33m" << "Dog Default created" << "\033[0m" << std::endl;
}

Dog::Dog(const std::string _type): Animal("Dog")
{
	std::cout << "\033[33m" << "Dog " << _type << " created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog& other): Animal("Dog")
{
	std::cout << "\033[33m" << "Dog " << other.type << " copy created" << "\033[0m" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\033[33m" << "Dog destroyed" << "\033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "\033[33m" << "Wouaf" << "\033[0m" << std::endl;
}