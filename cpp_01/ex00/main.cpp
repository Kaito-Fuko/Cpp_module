#include "Zombie.hpp"

int main()
{
	Zombie* heapZombie = newZombie("HeadZombie");
	delete heapZombie;
	
	randomChump("StackZombie");
	return 0;
}