#include "Point.hpp"

Point::Point(void)
{
}

Point::Point(const float& x, const float& y): _x(x), _y(y)
{
}


Point::~Point()
{
}

Point::Point(const Point& copy): _x(copy._x), _y(copy._y)
{
}

Point&	Point::operator=(const Point& other)
{
	if (this != &other)
	{
	}
	return (*this);
}

const Fixed	Point::getX(void) const
{
	return (this->_x);
}

const Fixed	Point::getY(void) const
{
	return (this->_y);
}
