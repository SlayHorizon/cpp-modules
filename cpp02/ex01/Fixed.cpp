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


Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = integer << fractionalBits;
}


Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(floating * (1 << fractionalBits));
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


float	Fixed::toFloat(void) const
{
	return ((float)fixedPoint / (float)(1 << fractionalBits));
}


int	Fixed::toInt(void) const
{
	return (fixedPoint >> fractionalBits);
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


std::ostream	&operator<<(std::ostream &output, Fixed const &fixed)
{
	output << fixed.toFloat();
	return (output);
}
