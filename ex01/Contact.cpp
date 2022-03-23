/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:44:10 by msousa            #+#    #+#             */
/*   Updated: 2022/03/23 20:17:26 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact()
				// std::string first_name,
				// std::string last_name,
				// std::string nickname,
				// std::string phone_number,
				// std::string darkest_secret) :
				// _first_name(first_name),
				// _last_name(last_name),
				// _nickname(nickname),
				// _phone_number(phone_number),
				// _darkest_secret(darkest_secret)
{
	/* No-op */
}

void	Contact::display( void ) const
{
	std::cout << "First Name:     "	<< this->_first_name 		<< std::endl;
	std::cout << "Last Name:      "	<< this->_last_name 		<< std::endl;
	std::cout << "Nickname:       "	<< this->_nickname			<< std::endl;
	std::cout << "Phone Number:   "	<< this->_phone_number 		<< std::endl;
	std::cout << "Darkest Secret: "	<< this->_darkest_secret	<< std::endl;
}

void	Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::get_first_name( void ) const
{
	return this->_first_name;
}

std::string	Contact::get_last_name( void ) const
{
	return this->_last_name;
}

std::string	Contact::get_nickname( void ) const
{
	return this->_nickname;
}

std::string	Contact::get_phone_number( void ) const
{
	return this->_phone_number;
}

std::string	Contact::get_darkest_secret( void ) const
{
	return this->_darkest_secret;
}

