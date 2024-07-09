#ifndef _POINT_HPP_
# define _POINT_HPP_

# include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point(void);
	Point(const float &x, const float &y);
	Point(const Point &copy);
	~Point();
	Point		&operator=(const Point &copy);
	const Fixed	getX(void) const;
	const Fixed	getY(void) const;
};

#endif