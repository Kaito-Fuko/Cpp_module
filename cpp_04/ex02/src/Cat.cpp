#include "../include/Cat.hpp"

Cat::Cat(): Animal()
{
	brain = new Brain();
	std::cout << "Cat Default created" << std::endl;
}

Cat::Cat(const Cat& other): Animal()
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
