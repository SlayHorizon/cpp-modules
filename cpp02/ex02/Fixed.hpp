#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int integer);
		Fixed(const float floating);
		~Fixed();

		Fixed &operator=(Fixed const &fixed);

		bool	operator==(Fixed fixed) const;
		bool	operator!=(Fixed fixed) const;
		bool	operator>(Fixed fixed) const;
		bool	operator<(Fixed fixed) const;
		bool	operator>=(Fixed fixed) const;
		bool	operator<=(Fixed fixed) const;

		float	operator+(Fixed fixed) const;
		float	operator-(Fixed fixed) const;
		float	operator*(Fixed fixed) const;
		float	operator/(Fixed fixed) const;

		Fixed	operator++();
		Fixed	operator--();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int	fixedPoint;
		static const int	fractionalBits;
};


std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);


#endif
