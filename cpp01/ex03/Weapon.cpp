#include "Weapon.hpp"


Weapon::Weapon(const std::string &type)
	: _type(type)
{
}


Weapon::~Weapon()
{
	std::cout << "Weapon destroyed with type " << getType() << std::endl;
}


std::string	Weapon::getType() const
{
	return _type;
}


void	Weapon::setType(const std::string &new_type)
{
	_type = new_type;
}
