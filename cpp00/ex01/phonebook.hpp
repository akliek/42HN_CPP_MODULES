/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:23:26 by akliek            #+#    #+#             */
/*   Updated: 2021/12/01 12:51:41 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iomanip>
# include <iostream>

class contact
{
	public:
		std::string  first_name;
		std::string  last_name;
		std::string  nickname;
		std::string  phone_number;
		std::string  darkest_secret;
};

class phonebook
{
	public:
		contact contacts[9];
};

#endif
