#include "Point.hpp"

Point::Point(void): x(0), y(0)
{
}

Point::~Point(void)
{
}

Point::Point(const Fixed &a, const Fixed &b): x(a), y(b)
{
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point	&Point::operator = (const Point &copy)
{
	this->x1 = copy.x;
	this->y1 = copy.y;

	return (*this);
}

float		Point::getX(void) const
{
	return (this->x1.toFloat());
}

float		Point::getY(void) const
{
	return (this->y1.toFloat());
}
