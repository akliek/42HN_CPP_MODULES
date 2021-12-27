/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:30:38 by akliek            #+#    #+#             */
/*   Updated: 2021/11/02 13:25:35 by akliek           ###   ########.fr       */
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

		Fixed   &operator = (const Fixed &copy);

		int		getRawBits( void ) const;
        void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator << (std::ostream &out, const Fixed &fix);

#endif
