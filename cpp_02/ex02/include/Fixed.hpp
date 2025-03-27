
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
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		friend Fixed operator+(const Fixed& a, const Fixed& b);
		friend Fixed operator-(const Fixed& a, const Fixed& b);
		friend Fixed operator*(const Fixed& a, const Fixed& b);
		friend Fixed operator/(const Fixed& a, const Fixed& b);

		friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

		static Fixed &min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		
		int		getRawBits() const;
		void	setRawBits(int value);
		int		toInt() const;
};

#endif

// J'affronterai toutes les tempêtes
// Sans peur des vents déchaînés
// J'éviterai tous les récifs
// Si tu voulais m'aimer
// Aucun soleil ou froid du Nord
// Ne pourra plus m'arrêter
// Si tu me promettais ton cœur ... alors
// Je t'aimerai pour l'éternité

// Mon cher ami mon tendre aimé
// Tes mots me mettent en émoi
// Je n'ai pas besoin d'exploits guerriers
// Quand je suis au creux de tes bras

// Mais je t'offrirai des trésors
// Je chanterai à pleine voix (vraiment ?)
// Je te protégerai des coups du sort
// Si tu restais près de moi

// Je n'ai pas besoin de tes trésors
// Ni que tu chantes à pleine voix
// Je veux seulement prendre ta main..
// Je te veux auprès de moi

// T'aimer très fort et t'embrasser
// Danser toute la nuit
// Car pour le pire et le meilleur
// Nous serons toujours unis
// J'affronterai toutes les tempêtes
// Sans peur des vents déchaînés
// J'éviterai tous les récifs
// Si tu voulais m'aimer 