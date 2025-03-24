#include "../include/Fixed.hpp"

Fixed::Fixed(): entier(0)
{
	std::cout << "default constructeur is call" << std::endl;
}

Fixed::Fixed(const Fixed& other): entier(other.entier)
{
	std::cout << "constructeur copy is call" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "destructeur is call" << std::endl;
}

int	Fixed::getFixed() const
{

}

void	Fixed::setFixed(int entier)
{
	
}