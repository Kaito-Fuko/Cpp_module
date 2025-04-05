
#include "../include/Fixed.hpp"

Fixed::Fixed(): value(0)
{}

Fixed::Fixed(int value): value(value << valueBits)
{}

Fixed::Fixed(float value): value(roundf(value * (1 << valueBits)))
{}

Fixed::Fixed(const Fixed& other): value(other.value)
{}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->value = other.value;
	return *this;
}

Fixed& Fixed::operator++()
{
	this->value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->value += 1;
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->value -= 1;
	return tmp;
}

Fixed operator+(const Fixed& a, const Fixed& b)
{
	Fixed res;
	res.setRawBits(a.getRawBits() + b.getRawBits());
	return (res);
}

Fixed operator-(const Fixed& a, const Fixed& b)
{
	Fixed res;
	res.setRawBits(a.getRawBits() - b.getRawBits());
	return (res);
}

Fixed operator*(const Fixed& a, const Fixed& b)
{
	Fixed res;
	res.setRawBits(a.getRawBits() * b.getRawBits());
	return (res);
}

Fixed operator/(const Fixed& a, const Fixed& b)
{
	Fixed res;
	res.setRawBits(a.getRawBits() / b.getRawBits());
	return (res);
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

bool operator<(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() < b.getRawBits());
}

bool operator>(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() > b.getRawBits());
}

bool operator<=(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() <= b.getRawBits());
}

bool operator>=(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() >= b.getRawBits());
}

bool operator==(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() == b.getRawBits());
}

bool operator!=(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() != b.getRawBits());
}

Fixed::~Fixed()
{}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
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