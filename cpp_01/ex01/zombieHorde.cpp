#include "Zombie.hpp"

// need setZombie because you can't use Zombie(std::string name) Horde is tableur.
void	Zombie::setZombie(std::string name)
{
	this->name = name;
}

std::string intToString(int number)
{
    std::stringstream ss;
    ss << number;
    return ss.str();
}

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);

	Zombie* Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Horde[i].setZombie("- " + intToString(i + 1) + " " + name);
	}
	return (Horde);

}
