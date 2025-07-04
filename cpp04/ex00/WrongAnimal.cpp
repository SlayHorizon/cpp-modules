#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("Wrong Animal type")
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}


void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound." << std::endl;
}


std::string	WrongAnimal::getType() const
{
	return type;
}
