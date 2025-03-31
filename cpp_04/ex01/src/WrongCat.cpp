#include "../include/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "\033[92m" << "WrongCat Default created" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const std::string _type): WrongAnimal("WrongCat")
{
	std::cout << "\033[92m" << "WrongCat " << _type << " created" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal("WrongCat")
{
	std::cout << "\033[92m" << "WrongCat " << other.type << " copy created" << "\033[0m" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "\033[92m" << "WrongCat destroyed" << "\033[0m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void  WrongCat::makeSound() const
{
	std::cout << "\033[92m" << "Wrong Miaou" << "\033[0m" << std::endl;
}