/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:44:14 by msousa            #+#    #+#             */
/*   Updated: 2022/03/31 19:30:48 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# define COLUMN_SIZE 10

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	void		set_first_name(std::string first_name);
	void		set_last_name(std::string last_name);
	void		set_nickname(std::string nickname);
	void		set_phone_number(std::string phone_number);
	void		set_darkest_secret(std::string darkest_secret);
	std::string	get_first_name( void ) const;
	std::string	get_last_name( void ) const;
	std::string	get_nickname( void ) const;
	std::string	get_phone_number( void ) const;
	std::string	get_darkest_secret( void ) const;
	void		display( void ) const;
};

void		ft_putendl(std::string text);
int			ft_stoi(std::string str);
std::string	get_input(std::string field);
std::string truncate(std::string str);

#endif

