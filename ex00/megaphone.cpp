/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:25:18 by msousa            #+#    #+#             */
/*   Updated: 2022/05/06 17:30:47 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (*(++argv)) {
			std::string str(*argv);
			for (size_t i = 0; i < str.length(); i++)
				std::cout << (char)std::toupper(str.at(i));
		}
	std::cout << std::endl;
	return (0);
}
