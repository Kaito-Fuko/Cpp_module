#include "../include/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default created" << std::endl;
}

WrongCat::WrongCat(const std::string _type): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat " << _type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat " << other.type << " copy created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void  WrongCat::makeSound() const
{
	std::cout << "Wrong Miaou" << std::endl;
}