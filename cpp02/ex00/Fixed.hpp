#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>


class	Fixed
{
	public:
		Fixed();
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	fixedPoint;
		static const int	fractionalBits;
};


#endif
