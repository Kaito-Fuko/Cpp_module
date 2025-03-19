#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <sstream>

class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie();
		~Zombie();

		void setZombie(std::string name);
		void announce();	
};

Zombie*	newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif