/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:44:31 by msousa            #+#    #+#             */
/*   Updated: 2022/03/24 17:48:24 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(): _contacts(), _count() { /* No-op */ }

PhoneBook::~PhoneBook()
{
	for (uint i = 0; i < _count; i++)
		delete _contacts[i];
}

void	PhoneBook::contact_add( void )
{
	Contact	*contact = new Contact;

	contact->set_first_name(	get_input("First Name"));
	contact->set_last_name(		get_input("Last Name"));
	contact->set_nickname(		get_input("Nickname"));
	contact->set_phone_number(	get_input("Phone Number"));
	contact->set_darkest_secret(get_input("Darkest Secret"));

	_set_contact(contact);
}

void PhoneBook::contacts_search( void ) const
{
	if (!_count)
	{
		ft_putendl("No contacts to display!");
		return ;
	}

	// display
	_contacts_display();

	// prompt for index
	std::string	input;
	int			index = -1;

	while (!_valid_contacts_index(index))
	{
		ft_putendl("Select contact with index:");
		std::cout << "> ";

		// receive input
		getline(std::cin, input);

		// convert to int
		index = ft_stoi(input);

		if (!_valid_contacts_index(index))
			ft_putendl("Index must be between 0 and 7!");
	}

	// get contact
	Contact *contact = _get_contact(index);
	if (contact)
		contact->display();
	else
		ft_putendl("There is no Contact at that index!");
}

void	PhoneBook::_set_contact(Contact *contact)
{
	if (_count == SIZE)
	{
		// delete oldest
		delete _contacts[0];
		// move all left
		for (uint i = 1; i < SIZE; i++)
			_contacts[i - 1] = _contacts[i];
	}
	else
		_count++;
	_contacts[_count - 1] = contact;
}

void	PhoneBook::_contacts_display(void) const
{
	ft_putendl("+-------------------------------------------+");
	ft_putendl("|     Index|First name| Last name|  Nickname|");
	ft_putendl("+-------------------------------------------+");
	for (uint i = 0; i < _count; i++)
		_contact_display(_contacts[i], i);
	ft_putendl("+-------------------------------------------+");

}

void	PhoneBook::_contact_display(Contact *contact, uint index) const
{
	std::string	first_name 	= truncate(contact->get_first_name());
	std::string	last_name 	= truncate(contact->get_last_name());
	std::string	nickname 	= truncate(contact->get_nickname());

	std::string	index_ws;
	std::string	first_name_ws;
	std::string	last_name_ws;
	std::string	nickname_ws;

	index_ws		= std::string(COLUMN_SIZE - 1, ' ');
	first_name_ws	= std::string(COLUMN_SIZE - first_name.length(), ' ');
	last_name_ws	= std::string(COLUMN_SIZE - last_name.length(), ' ');
	nickname_ws		= std::string(COLUMN_SIZE - nickname.length(), ' ');

	std::cout << "|" << index_ws 		<< index;
	std::cout << "|" << first_name_ws 	<< first_name;
	std::cout << "|" << last_name_ws 	<< last_name;
	std::cout << "|" << nickname_ws 	<< nickname;
	std::cout << "|" << std::endl;
}

bool	PhoneBook::_valid_contacts_index(int index) const
{
	return (index >= 0 && index < SIZE);
}

Contact *PhoneBook::_get_contact(uint index) const
{
	if (index < SIZE)
		return (_contacts[index]);
	return (NULL);
}
