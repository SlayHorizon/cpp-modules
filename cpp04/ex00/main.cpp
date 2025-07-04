#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	std::cout << "Subject tests:" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "More tests:" << std::endl;
	std::cout << std::endl << std::endl;
	const	WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	delete wrongCat;

	return 0;
}
