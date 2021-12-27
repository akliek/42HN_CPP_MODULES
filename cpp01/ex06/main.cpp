/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:48:39 by akliek            #+#    #+#             */
/*   Updated: 2021/10/26 17:14:39 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cerr << "Error: argument" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);	
	return (0);
}
