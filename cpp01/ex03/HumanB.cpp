#include "HumanB.hpp"


HumanB::HumanB(const std::string &human_name)
	: _name(human_name), _weapon(NULL)
{
	std::cout << "HumanB created with name " << human_name << std::endl;
}


HumanB::~HumanB()
{
	std::cout << "HumanB deleted with name " << _name << std::endl;
}


void	HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}


void	HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType()
			<< std::endl;
	else
		std::cout << _name << " has no weapon to attack with." << std::endl;
}
