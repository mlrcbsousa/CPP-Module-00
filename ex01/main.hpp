/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:27:44 by msousa            #+#    #+#             */
/*   Updated: 2022/03/24 17:28:53 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <sstream>
# include "Contact.hpp"
# include "PhoneBook.hpp"

# define ADD "ADD"
# define SEARCH "SEARCH"
# define EXIT "EXIT"

# define EMPTY ""

# define COLUMN_SIZE 10

void		ft_putendl(std::string text);
int			ft_stoi(std::string str);
std::string	get_input(std::string field);
std::string truncate(std::string str);

#endif
