#include "../include/Fixed.hpp"

// |------------------------------------------|
// |il peut y avoir un difference de resulta a|
// |cause pa l'optimisation du compilateur.   |
// |------------------------------------------|

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}