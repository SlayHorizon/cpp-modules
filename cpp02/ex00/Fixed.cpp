#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int	Fixed::getRawBits(void) const
{
	return (fixedPoint);
}


void	Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}
