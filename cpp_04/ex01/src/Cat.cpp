#include "../include/Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat Default created" << std::endl;
}

Cat::Cat(const std::string _type): Animal("Cat")
{
	brain = new Brain();
	std::cout << _type << " created" << std::endl;
}

Cat::Cat(const Cat& other): Animal("Cat")
{
	brain = new Brain();
	std::cout << other.type << " copy created" << std::endl;
}

Cat::~Cat()
{
	delete brain;
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

Brain*	Cat::getBrain() const
{
	return brain;
}
