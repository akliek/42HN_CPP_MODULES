/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:30:35 by akliek            #+#    #+#             */
/*   Updated: 2021/11/06 14:20:20 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const p);

int	main(void)
{
	Point const	a(Fixed((const float)10.12), Fixed((const float)0));
	Point const	b(Fixed((const float)0), Fixed((const float)10.12));
	Point const	c(Fixed((const float)5.6), Fixed((const float)10.12));
	Point const	p1(Fixed((const float)5.6), Fixed((const float)5.6));
	Point const	p2(Fixed((const float)2.8), Fixed((const float)10.12));
	Point const	p3(Fixed((const float)5.6), Fixed((const float)10.12));
	Point const	p4(Fixed((const float)1), Fixed((const float)4));

	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;
	std::cout << bsp(a, b, c, p4) << std::endl;

	return (0);
}
