/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:03:03 by akliek            #+#    #+#             */
/*   Updated: 2021/11/03 14:41:32 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char **argv)
{
	int				s;
	int				l;
	std::string		file;
	std::string		line;
	std::ifstream	fin;
	std::ofstream	fout;

	if (argc != 4)
	{
		std::cerr << "Error: argument" << std::endl;
		return (1);
	}
	file = argv[1];
	file += ".replace";
	fin.open(argv[1]);
	if (!fin)
	{
		std::cerr << "Error: can't open " << argv[1] << std::endl;
		return (1);
	}
	fout.open(file);
	getline(fin, line);
	while (fin)
	{
		if ((s = line.find(argv[2])) == -1)
			fout << line << std::endl;
		else
		{
			l = s + strlen(argv[2]);
			for (int k = 0; k < s; k++)
				fout << line[k];
			fout << argv[3] << line.substr(l) << std::endl;
		}
		getline(fin, line);
	}
	fin.close();
	fout.close();
	return (0);
}
