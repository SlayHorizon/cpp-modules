#include "Fixed.hpp"


const int	Fixed::fractionalBits = 8;


Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &fixed)
		setRawBits(fixed.getRawBits());
	return *this;
}


int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPoint;
}


void	Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}
