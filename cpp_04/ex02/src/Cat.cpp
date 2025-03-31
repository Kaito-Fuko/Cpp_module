#include "../include/Cat.hpp"

Cat::Cat(): Animal()
{
	brain = new Brain();
	std::cout << "\033[92m" << "Cat Default created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat& other): Animal()
{
	brain = new Brain();
	std::cout << "\033[92m" << other.type << " copy created" << "\033[0m" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "\033[92m" << "Cat destroyed" << "\033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void  Cat::makeSound() const
{
	std::cout << "\033[92m" << "Miaou" << "\033[0m" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return brain;
}
