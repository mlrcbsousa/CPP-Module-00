/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:40:00 by msousa            #+#    #+#             */
/*   Updated: 2022/03/22 23:31:05 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	std::cout << "Welcome to your PhoneBook!" << std::endl;

	// main loop
	while (cmd != EXIT)
	{
		std::cout << "What would you like to do?" << std::endl;
		std::cout << "(ADD, SEARCH, EXIT)" << std::endl;
		std::cout << "> ";

		// receive instruction
		getline(std::cin, cmd);

		// do each instruction
		if (cmd == ADD)
		{} // PhoneBook.contact_add()
		else if (cmd == SEARCH)
		{} // PhoneBook.contacts_search()
		else if (cmd != EXIT)
			std::cout << "Not a valid Command!" << std::endl;
	}
	return (0);
}
