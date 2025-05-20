#include "Zombie.hpp"


Zombie::Zombie(std::string s) : _name(s)
{
	std::cout << "The zombie " << _name << " has been created." << "\n" << std::endl;
}


Zombie::~Zombie()
{
	std::cout << _name << "Zombie destroyed!\n"  << std::endl;
}


void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}
