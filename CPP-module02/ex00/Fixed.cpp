#include "Fixed.hpp"

const int	Fixed::_fract = 8;

Fixed::Fixed(void): _num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_num = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}
