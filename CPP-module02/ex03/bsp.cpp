#include "Point.hpp"

float	area(const Point &a, const Point &b, const Point &c)
{
	return std::abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + \
		b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + \
		c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0);
}

bool	bsp(const Point &a, const Point &b, const Point &c, const Point &point)
{
	Fixed	total = area(a, b, c);
	Fixed	area1 = area(point, b, c);
	Fixed	area2 = area(a, point, c);
	Fixed	area3 = area(a, b, point);
	return (total == area1 + area2 + area3);
}
