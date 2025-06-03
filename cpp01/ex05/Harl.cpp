#include "Harl.hpp"


void	(Harl::* const Harl::COMPLAIN_FUNCTIONS[LEVEL_COUNT])(void) const = {
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error
};

const std::string	Harl::LEVELS[LEVEL_COUNT] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};


void	Harl::complain(std::string level)
{
	for (int i = 0; i < LEVEL_COUNT; i++)
	{
		if (level == LEVELS[i])
		{
			(this->*COMPLAIN_FUNCTIONS[i])();
			return ;
		}
	}
	std::cout << "unknown level" << std::endl;
}


void	Harl::debug(void) const
{
	std::cout << "debug message" << std::endl;
}


void	Harl::info(void) const
{
	std::cout << "info message" << std::endl;
}


void	Harl::warning(void) const
{
	std::cout << "warning message" << std::endl;
}


void	Harl::error(void) const
{
	std::cout << "error message" << std::endl;
}
