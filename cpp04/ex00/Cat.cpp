#include "Cat.hpp"


Cat::Cat()
{
	type = "Cat type";
	std::cout << "Cat constructor called." << std::endl;
}


Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}


void	Cat::makeSound() const
{
	std::cout << "Cat sound meow" << std::endl;
}
