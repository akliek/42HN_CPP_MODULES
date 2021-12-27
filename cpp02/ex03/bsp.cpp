#include "Point.hpp"

float	is_inside(Point const &v1, Point const &v2, Point const &v3)
{
	return ((v1.getX() - v3.getX()) * (v2.getY() - v3.getY()) - (v2.getX() - v3.getX()) * (v1.getY() - v3.getY()));
}

bool    bsp(Point const a, Point const b, Point const c, Point const p)
{
	float	v1 = is_inside(p, a, b);
	float	v2 = is_inside(p, b, c);
	float	v3 = is_inside(p, c, a);

	if (v1 == 0 || v2 == 0 || v3 == 0)
		return (false);
	else if ((v1 < 0 && v2 < 0 && v3 < 0)
			|| (v1 > 0 && v2 > 0 && v3 > 0))
		return (true);
	return (false);
}
