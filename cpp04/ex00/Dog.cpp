#include "Dog.hpp"


Dog::Dog()
{
	type = "Dog type";
	std::cout << "Dog constructor called." << std::endl;
}


Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}


void	Dog::makeSound() const
{
	std::cout << "Dog sound waf woof" << std::endl;
}
