#include "../include/Fixed.hpp"

// |------------------------------------------|
// |il peut y avoir un difference de resulta a|
// |cause pa l'optimisation du compilateur.   |
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
	// std::cout << Fixed::max( a, b ) << std::endl;
	// std::cout << Fixed::max(a, c) << std::endl;
	// std::cout << Fixed::min(a, c) << std::endl;
	// std::cout << Fixed::max(b, d) << std::endl;
	// std::cout << Fixed::min(b, d) << std::endl;

	return 0;
}