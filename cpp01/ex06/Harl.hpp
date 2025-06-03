#ifndef HARL_HPP
# define HARL_HPP


#include <string>
#include <iostream>


class	Harl
{
	public:
		void	complain(std::string level);

	private:

		static const int			LEVEL_COUNT = 4;
		static const std::string	LEVELS[LEVEL_COUNT];
		static void					(Harl::* const COMPLAIN_FUNCTIONS[LEVEL_COUNT])(void) const;

		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};


#endif
