/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:44:45 by msousa            #+#    #+#             */
/*   Updated: 2022/03/23 17:54:09 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define SIZE 8

class PhoneBook
{
private:
	Contact	*_contacts[SIZE];
	int		_count;
	bool	_valid_contacts_index(int index) const;
public:
	PhoneBook();
	~PhoneBook();
	void	set_contact(Contact *contact);
	Contact *get_contact(uint index) const;
	void	contact_add(void);
	void	contacts_search(void) const;
};

#endif
