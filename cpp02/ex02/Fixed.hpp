/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:30:38 by akliek            #+#    #+#             */
/*   Updated: 2021/11/02 16:59:56 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	private:
		int					value;
		static const int    bits = 8;
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &copy);
		~Fixed(void);

		Fixed	operator ++ (int);
		Fixed	&operator ++ (void);
		Fixed	operator -- (int);
		Fixed	&operator -- (void);
		Fixed	&operator = (const Fixed &copy);
		Fixed	operator + (const Fixed &plus) const;
		Fixed	operator - (const Fixed &minus) const;
		Fixed	operator * (const Fixed &multiply) const;
		Fixed	operator / (const Fixed &devide) const;
		bool	operator > (const Fixed &bigger) const;
		bool	operator < (const Fixed &smaller) const;
		bool	operator >= (const Fixed &bigger_equal) const;
		bool	operator <= (const Fixed &smaller_equal) const;
		bool	operator == (const Fixed &equal) const;
		bool	operator != (const Fixed &not_equal) const;

		int					getRawBits( void ) const;
        void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
};

std::ostream	&operator << (std::ostream &out, const Fixed &fix);

#endif
