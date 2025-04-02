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
	// value = roundf(value * (1 << valueBits));
	std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other): value(other.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->value = other.value;
	return *this;
	std::cout << "Copy assignment operator called" << std::endl;
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

float	Fixed::toFloat() const
{
	return ((float)value / (1 << valueBits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
