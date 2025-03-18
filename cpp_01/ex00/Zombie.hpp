#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>
# include <cstdlib>

class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie(std::string name);
		~Zombie();

		void announce();	
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif