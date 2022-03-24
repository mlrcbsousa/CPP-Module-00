/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:40:00 by msousa            #+#    #+#             */
/*   Updated: 2022/03/24 17:44:26 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_putendl(std::string str)
{
	std::cout << str << std::endl;
}

int	ft_stoi(std::string str)
{
	std::stringstream 	ss;
	int					num;

	ss << str;
	ss >> num;
	return (num);
}

std::string	truncate(std::string str)
{
    if (str.length() > COLUMN_SIZE)
        return (str.substr(0, COLUMN_SIZE - 1) + ".");
    return (str);
}

std::string	get_input(std::string field)
{
	std::string	value;

	while (value == EMPTY)
	{
		std::cout << field << "?" << std::endl;
		std::cout << "> ";

		// receive value
		getline(std::cin, value);

		if (value == EMPTY)
			std::cout << field << " can not be empty!" << std::endl;
	}
	return (value);
}

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	ft_putendl("Welcome to your PhoneBook!");

	// main loop
	while (cmd != EXIT)
	{
		ft_putendl("What would you like to do?");
		ft_putendl("(ADD, SEARCH, EXIT)");
		std::cout << "> ";

		// receive instruction
		getline(std::cin, cmd);

		// do each instruction
		if (cmd == ADD)
			phonebook.contact_add();
		else if (cmd == SEARCH)
			phonebook.contacts_search();
		else if (cmd != EXIT)
			ft_putendl("Not a valid Command!");
	}
	return (0);
}
