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

Zombe*	newZombie(std::string name);
void	randomChump(std::tring name);

#endif