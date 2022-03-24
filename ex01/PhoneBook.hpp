/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:44:45 by msousa            #+#    #+#             */
/*   Updated: 2022/03/24 17:28:19 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

# define SIZE 8

class PhoneBook
{
private:
	Contact	*_contacts[SIZE];
	uint	_count;
	bool	_valid_contacts_index(int index) const;
	void	_set_contact(Contact *contact);
	Contact *_get_contact(uint index) const;
	void	_contacts_display(void) const;
	void	_contact_display(Contact *contact, uint index) const;
public:
	PhoneBook();
	~PhoneBook();
	void	contact_add(void);
	void	contacts_search(void) const;
};

#endif
