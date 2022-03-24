/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:27:44 by msousa            #+#    #+#             */
/*   Updated: 2022/03/24 11:56:57 by msousa           ###   ########.fr       */
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

void		ft_putendl(std::string text);
int			ft_stoi(std::string str);
std::string	get_input(std::string field);

#endif
