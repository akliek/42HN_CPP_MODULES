/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:32:31 by akliek            #+#    #+#             */
/*   Updated: 2021/11/02 13:25:23 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = num << bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(num * (1 << bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator = (const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
		this->value = copy.value;
	return (*this);
}

std::ostream	&operator << (std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void			Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int				Fixed::toInt(void) const
{
	return (this->value >> bits);
}

float			Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << bits));
}
