#include "../include/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat Default created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal()
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