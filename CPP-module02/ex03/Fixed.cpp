#include "Fixed.hpp"

const int	Fixed::_fract = 8;

Fixed::Fixed(void): _num(0)
{
}

Fixed::Fixed(const int &value): _num(value << _fract)
{
}

Fixed::Fixed(const float &value): _num(roundf(value * (1 << _fract)))
{
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	if (this != &copy)
		this->_num = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_num / (1 << _fract));
}

int	Fixed::toInt(void) const
{
	return (this->_num >> this->_fract);
}

Fixed	Fixed::operator*(Fixed const &other_num) const
{
	return (Fixed(this->toFloat() * other_num.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &other_num) const
{
	return (Fixed(this->toFloat() / other_num.toFloat()));
}

Fixed	Fixed::operator+(Fixed const &other_num) const
{
	return (Fixed(this->toFloat() + other_num.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &other_num) const
{
	return (Fixed(this->toFloat() - other_num.toFloat()));
}

bool	Fixed::operator>(Fixed const &other_num) const
{
	return (this->_num > other_num._num);
}

bool	Fixed::operator<(Fixed const &other_num) const
{
	return (this->_num < other_num._num);
}

bool	Fixed::operator>=(Fixed const &other_num) const
{
	return (this->_num >= other_num._num);
}

bool	Fixed::operator<=(Fixed const &other_num) const
{
	return (this->_num <= other_num._num);
}

bool	Fixed::operator!=(Fixed const &other_num) const
{
	return (this->_num != other_num._num);
}

bool	Fixed::operator==(Fixed const &other_num) const
{
	return (this->_num == other_num._num);
}

Fixed	&Fixed::operator++()
{
	this->_num++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(this->_num);

	++(this->_num);
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->_num--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(this->_num);

	--(this->_num);
	return (tmp);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed)
{
	return (os << fixed.toFloat());
}