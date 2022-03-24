/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:44:31 by msousa            #+#    #+#             */
/*   Updated: 2022/03/24 12:54:27 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(): _contacts(), _count() { /* No-op */ }

PhoneBook::~PhoneBook()
{
	for (uint i = 0; i < this->_count; i++)
		delete this->_contacts[i];
}

void	PhoneBook::set_contact(Contact *contact)
{
	if (this->_count == SIZE)
	{
		delete this->_contacts[0];
		// move all left
		for (uint i = 1; i < SIZE; i++)
			this->_contacts[i - 1] = this->_contacts[i];
	}
	else
		this->_count++;
	this->_contacts[this->_count - 1] = contact;
}

Contact *PhoneBook::get_contact( uint index ) const
{
	if (index < SIZE)
		return (this->_contacts[index]);
	return (NULL);
}

void	PhoneBook::contact_add( void )
{
	Contact	*contact = new Contact;

	contact->set_first_name(	get_input("First Name"));
	contact->set_last_name(		get_input("Last Name"));
	contact->set_nickname(		get_input("Nickname"));
	contact->set_phone_number(	get_input("Phone Number"));
	contact->set_darkest_secret(get_input("Darkest Secret"));

	this->set_contact(contact);
}

void PhoneBook::contacts_search( void ) const
{
	if (!this->_count)
	{
		ft_putendl("No contacts to display!");
		return ;
	}

	// display
	// this->contacts_display();

	// prompt for index
	std::string	input;
	int			index = -1;

	while (!this->_valid_contacts_index(index))
	{
		ft_putendl("Select contact with index:");
		std::cout << "> ";

		// receive input
		getline(std::cin, input);

		// convert to int
		index = ft_stoi(input);

		if (!this->_valid_contacts_index(index))
			ft_putendl("Index must be between 0 and 7!");
	}

	// get contact
	Contact *contact = get_contact(index);
	if (contact)
		contact->display();
	else
		ft_putendl("There is no Contact at that index!");
}

bool	PhoneBook::_valid_contacts_index(int index) const
{
	return (index >= 0 && index < SIZE);
}

