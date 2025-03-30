#include "../include/WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal()
{
	std::cout << "WrongDog Default created" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other): WrongAnimal()
{
	std::cout << "WrongDog " << other.type << " copy created" << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destroyed" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void WrongDog::makeSound() const
{
	std::cout << "Wrong Wouaf" << std::endl;
}