#include "Weapon.hpp"


Weapon::Weapon(const std::string type)
{
	this->_type = type;
}


Weapon::~Weapon()
{
	std::cout << "Weapon destroyed with type " << this->getType() << std::endl;
}


std::string	Weapon::getType()
{
	return this->_type;
}


void	Weapon::setType(const std::string new_type)
{

	this->_type = new_type;
}
