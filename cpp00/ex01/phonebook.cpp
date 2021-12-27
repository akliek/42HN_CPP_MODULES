/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:24:53 by akliek            #+#    #+#             */
/*   Updated: 2021/12/01 12:51:24 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook	add_contact(phonebook book)
{
	int		i;
	contact	tmp;

	i = 0;
	while (i < 8 && !book.contacts[i].nickname.empty())
		i++;
	if (i == 8)
	{
		for (int j = 0; j < 7; j++)
			book.contacts[j] = book.contacts[j + 1];
		i = 7;	
	}
	std::cout << "	First name: ";
	getline(std::cin, book.contacts[i].first_name);
	std::cout << "	Last name: ";
	getline(std::cin, book.contacts[i].last_name);
	std::cout << "	Nickname: ";
	getline(std::cin, book.contacts[i].nickname);
	std::cout << "	Phone number: ";
	getline(std::cin, book.contacts[i].phone_number);
	std::cout << "	Darkest secret: ";
	getline(std::cin, book.contacts[i].darkest_secret);
	return (book);
}

void	print_column(std::string str)
{
	if (str.length() > 10)
	{
		for (int j = 0; j < 9; j++)
			std::cout << str[j];
		std::cout << ".|";	
	}
	else
	{
		for (int j = str.length(); j < 10; j++)
			std::cout << " ";
		std::cout << str;
		std::cout << "|";
	}
}

void	search_contacts(phonebook book)
{
	int			i;
	int			j;
	std::string	index;

	i = 0;
	while (!book.contacts[i].nickname.empty())
	{
		std::cout << "         " << i + 1 << "|";
		print_column(book.contacts[i].first_name);
		print_column(book.contacts[i].last_name);
		print_column(book.contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}
	if (i == 0)
	{
		std::cout << "There are no cotacts yet." << std::endl;
		return ;
	}
	std::cout << "Write an index to see more information: ";
	getline(std::cin, index);
	for (int k = 0; index[k]; k++)
		if (!std::isdigit(index[k]))
		{
			std::cout << "Is everything okay?" << std::endl;
			return ;
		}
	j = std::stoi(index);
	if (j < 1 || j > i)
	{
		std::cout << "	Contact with this index doe's not exist." << std::endl;
		return ;
	}
	else
	{
		std::cout << "	First name: " << book.contacts[j - 1].first_name << std::endl;
		std::cout << "	Last name: " << book.contacts[j - 1].last_name << std::endl;
		std::cout << "	Nickname: " << book.contacts[j - 1].nickname << std::endl;
		std::cout << "	Phone number: " << book.contacts[j - 1].phone_number << std::endl;
	}
}

int main()
{
	phonebook	book;
	std::string	cmd;

	while (1)
	{
		std::cout << "Write a command: ";
		getline(std::cin, cmd);
		if (!cmd.compare("EXIT"))
			return (0);
		else if (!cmd.compare("ADD"))
			book = add_contact(book);
		else if (!cmd.compare("SEARCH"))
			search_contacts(book);
		else
			std::cout << "Command doe's not exist. You can use only ADD, SEARCH or EXIT" << std::endl;
	}
}
