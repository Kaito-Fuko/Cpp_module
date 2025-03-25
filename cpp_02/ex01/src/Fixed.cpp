#include "../include/Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value): value(value << valueBits)
{
	std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(float value): value(roundf(value * (1 << valueBits)))
{
	std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other): value(other.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.value;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << static_cast<float>(fixed.value) / (1 << fixed.valueBits);
	return out;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int raw)
{
	this->value = raw;
}

int	Fixed::toInt() const
{
	return value >> valueBits;
}