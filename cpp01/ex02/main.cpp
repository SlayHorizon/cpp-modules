#include <string>
#include <iostream>


int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*str_ptr = &str;
	std::string	&str_adr = str;

	std::cout << "The adresses:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << str_ptr << std::endl;
	std::cout << &str_adr << std::endl;

	std::cout << "The values:" << std::endl;
	std::cout << str << std::endl;
	std::cout << *str_ptr << std::endl;
	std::cout << str_adr << std::endl;

	return 0;
}
