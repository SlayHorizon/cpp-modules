#include "Zombie.hpp"
#include <iostream>


int	main()
{
	Zombie *heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("stackZombie");

	return 0;
}
