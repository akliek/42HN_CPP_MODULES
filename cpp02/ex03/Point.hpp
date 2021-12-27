#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
		Fixed		x1;
		Fixed		y1;
	public:
		Point(void);
		~Point(void);
		Point(const Fixed &a, const Fixed &b);
		Point(const Point &copy);

		Point	&operator = (const Point &copy);

		float		getX(void) const;
		float		getY(void) const;
};
