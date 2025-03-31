#include "../include/Fixed.hpp"

// |------------------------------------------|
// |il peut y avoir un difference de resulta a|
// |cause de l'optimisation du compilateur.   |
// |------------------------------------------|

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(b);
	Fixed const d(a);
	
	std::cout << "1 " << a << std::endl;
	std::cout << "2 " << ++a << std::endl;
	std::cout << "3 " << a << std::endl;
	std::cout << "4 " << a++ << std::endl;
	std::cout << "5 " << a << std::endl;
	std::cout << "6 " << b << std::endl;
	std::cout << "7 " << c << std::endl;
	std::cout << "8 " << d << std::endl;

	std::cout << a << "/" << c << ": max: " << Fixed::max(a, c) << std::endl;
	std::cout << a << "/" << c << ": min: " << Fixed::min(a, c) << std::endl;
	std::cout << b << "/" << d << ": max: " << Fixed::max(b, d) << std::endl;
	std::cout << b << "/" << d << ": min: " << Fixed::min(b, d) << std::endl;

	return 0;
}