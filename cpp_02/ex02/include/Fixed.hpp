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
		~Fixed();
		
		Fixed& operator=(const Fixed& other);
		Fixed& operator*(const Fixed& other);
		Fixed& operator+(const Fixed& other);
		
		friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		
		int		getRawBits() const;
		void	setRawBits(int value);
		int		toInt() const;
};

#endif