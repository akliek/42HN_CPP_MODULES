/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:21:22 by akliek            #+#    #+#             */
/*   Updated: 2021/11/06 14:29:07 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Karen_HPP
# define Karen_HPP

# include <iostream>

class Karen
{
	public:
		void	complain(std::string level);
	private:
		void	info(void);
		void	debug(void);
		void	error(void);
		void	warning(void);
};

#endif
