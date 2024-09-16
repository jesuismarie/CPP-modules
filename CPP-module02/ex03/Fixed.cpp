#include "Fixed.hpp"

const int	Fixed::_fract = 8;

Fixed::Fixed(void): _num(0)
{
}

Fixed::Fixed(const int& value): _num(value << this->_fract)
{
}

Fixed::Fixed(const float& value): _num(roundf(value * (1 << this->_fract)))
{
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->_num = other.getRawBits();
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
	return ((float)this->_num / (1 << this->_fract));
}

int	Fixed::toInt(void) const
{
	return (this->_num >> this->_fract);
}

Fixed	Fixed::operator*(const Fixed& other_num) const
{
	return (Fixed(this->toFloat() * other_num.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other_num) const
{
	return (Fixed(this->toFloat() / other_num.toFloat()));
}

Fixed	Fixed::operator+(const Fixed& other_num) const
{
	return (Fixed(this->toFloat() + other_num.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other_num) const
{
	return (Fixed(this->toFloat() - other_num.toFloat()));
}

bool	Fixed::operator>(const Fixed& other_num) const
{
	return (this->_num > other_num._num);
}

bool	Fixed::operator<(const Fixed& other_num) const
{
	return (this->_num < other_num._num);
}

bool	Fixed::operator>=(const Fixed& other_num) const
{
	return (this->_num >= other_num._num);
}

bool	Fixed::operator<=(const Fixed& other_num) const
{
	return (this->_num <= other_num._num);
}

bool	Fixed::operator!=(const Fixed& other_num) const
{
	return (this->_num != other_num._num);
}

bool	Fixed::operator==(const Fixed& other_num) const
{
	return (this->_num == other_num._num);
}

Fixed&	Fixed::operator++(void)
{
	this->_num++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++(this->_num);
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	this->_num--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--(this->_num);
	return (tmp);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	return (os << fixed.toFloat());
}
