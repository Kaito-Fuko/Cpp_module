#include "../include/Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	brain = new Brain();
	std::cout << "\033[92m" << "Cat Default created" << "\033[0m" << std::endl;
}

Cat::Cat(const std::string _type): Animal("Cat")
{
	brain = new Brain();
	std::cout << "\033[92m" << _type << " created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat& other): Animal("Cat")
{
	brain = new Brain(*other.brain);
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
	{
		this->type = other.type;
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}
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
