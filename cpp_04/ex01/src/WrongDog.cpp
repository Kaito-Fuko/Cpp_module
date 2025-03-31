#include "../include/WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal("WrongDog")
{
	std::cout << "\033[33m" << "WrongDog Default created" << "\033[0m" << std::endl;
}

WrongDog::WrongDog(const std::string _type): WrongAnimal("WrongDog")
{
	std::cout << "\033[33m" << "WrongDog " << _type << " created" << "\033[0m" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other): WrongAnimal("WrongDog")
{
	std::cout << "\033[33m" << "WrongDog " << other.type << " copy created" << "\033[0m" << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "\033[33m" << "WrongDog destroyed" << "\033[0m" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongDog::makeSound() const
{
	std::cout << "\033[33m" << "Wrong Wouaf" << "\033[0m" << std::endl;
}