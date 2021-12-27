/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:32:31 by akliek            #+#    #+#             */
/*   Updated: 2021/11/05 17:25:19 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): value(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
//	std::cout << "Int constructor called" << std::endl;
	this->value = num << bits;
}

Fixed::Fixed(const float num)
{
//	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(num * (1 << bits));
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

std::ostream	&operator << (std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}

int				Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
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

Fixed		&Fixed::operator = (const Fixed &copy)
{
//	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
		this->value = copy.value;
	return (*this);
}

Fixed	Fixed::operator + (const Fixed &plus) const
{
	Fixed	res;

	res = Fixed(this->toFloat() + plus.toFloat());
	return (res);
}

Fixed	Fixed::operator - (const Fixed &minus) const
{
	Fixed	res;

	res = Fixed(this->toFloat() - minus.toFloat());
	return (res); 
}

Fixed	Fixed::operator * (const Fixed &multiply) const
{
	Fixed	res;

	res = Fixed(this->toFloat() * multiply.toFloat());
	return (res);
}

Fixed	Fixed::operator / (const Fixed &devide) const
{
	Fixed	res;

	res = Fixed(this->toFloat() / devide.toFloat());
	return (*this);
}

Fixed	&Fixed::operator ++ (void)
{
	*this = Fixed((float)(this->toFloat() + 0.00390625));
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	tmp;

	tmp = Fixed((float)(this->toFloat() + 0.00390625));
	return (tmp);
}

Fixed	&Fixed::operator -- (void)
{
	*this = Fixed((float)(this->toFloat() - 0.00390625));
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	tmp;

	tmp = Fixed((float)(this->toFloat() - 0.00390625));
	return (tmp);
}

bool	Fixed::operator > (const Fixed &bigger) const
{
	if (this->toFloat() > bigger.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator < (const Fixed &smaller) const
{
	if (this->toFloat() < smaller.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator >= (const Fixed &bigger_equal) const
{
	if (this->toFloat() >= bigger_equal.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed &smaller_equal) const
{
	if (this->toFloat() <= smaller_equal.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator == (const Fixed &equal) const
{
	if (this->toFloat() == equal.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator != (const Fixed &not_equal) const
{
	if (this->toFloat() != not_equal.toFloat())
		return (true);
	return (false);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);	
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);	
}
