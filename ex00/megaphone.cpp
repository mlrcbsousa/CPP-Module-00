/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:25:18 by msousa            #+#    #+#             */
/*   Updated: 2022/03/24 17:38:06 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (*(++argv))
			for (size_t i = 0; i < std::strlen(*argv); i++)
				std::putchar(std::toupper((*argv)[i]));
	std::cout << std::endl;
	return (0);
}
