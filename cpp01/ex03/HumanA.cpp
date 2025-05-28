#include "HumanA.hpp"


HumanA::HumanA(const std::string human_name, Weapon &weapon)
	: _name(human_name), _weapon(&weapon)
{
	std::cout << "HumanA created with name " << human_name << std::endl;
}


HumanA::~HumanA()
{
	std::cout << "HumanA deleted with name " << _name << std::endl;
}


void	HumanA::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}


void	HumanA::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType()
			<< std::endl;
	else
		std::cout << _name << " has no weapon to attack with." << std::endl;
}
