#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	type = "WrongCat type";
	std::cout << "WrongCat constructor called." << std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}


void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sound meow" << std::endl;
}
