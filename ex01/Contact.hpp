/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:44:14 by msousa            #+#    #+#             */
/*   Updated: 2022/03/24 17:39:42 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"
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

#endif

