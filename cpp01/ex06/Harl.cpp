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
	int	levelIndex = -1;

	for (int i = 0; i < LEVEL_COUNT; i++)
	{
		if (level == LEVELS[i])
		{
			levelIndex = i;
			break ;
		}
	}

	switch (levelIndex)
	{
		case 0:
			std::cout << "[ " << LEVELS[0] << " ]" << std::endl;
			debug();
		case 1:
			std::cout << "[ " << LEVELS[1] << " ]" << std::endl;
			info();
		case 2:
			std::cout << "[ " << LEVELS[2] << " ]" << std::endl;
			warning();
		case 3:
			std::cout << "[ " << LEVELS[3] << " ]" << std::endl;
			error();
			break;
		default:
			std::cout << "[ " << "Probably complaining about insignificant problem" << " ]" << std::endl;
			break;
	}
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
