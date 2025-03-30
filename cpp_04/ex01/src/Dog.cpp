#include "../include/Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default created" << std::endl;
}

Dog::Dog(const std::string _type): Animal("Dog")
{
	std::cout << "Dog " << _type << " created" << std::endl;
}

Dog::Dog(const Dog& other): Animal("Dog")
{
	std::cout << "Dog " << other.type << " copy created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}