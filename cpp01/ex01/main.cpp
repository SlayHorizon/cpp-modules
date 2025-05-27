#include "Zombie.hpp"


int	main(void)
{
	Zombie	*horde;
	int		horde_size = 5;

	horde = zombieHorde(horde_size, "ZOMB");
	for (int i = 0; i < horde_size; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	
	return 0;
}
