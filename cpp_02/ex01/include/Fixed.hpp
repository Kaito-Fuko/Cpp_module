#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int 				value;
		static const int	valueBits = 8;

	public:
		Fixed();
		Fixed(int value);
		Fixed(float value);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int value);
		int		toInt() const;
		float		toFloat() const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif