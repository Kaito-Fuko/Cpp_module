#include "../include/Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Default created" << std::endl;
}

Cat::Cat(const std::string _type): Animal("Cat")
{
	std::cout << _type << " created" << std::endl;
}

Cat::Cat(const Cat& other): Animal("Cat")
{
	std::cout << other.type << " copy created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void  Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}