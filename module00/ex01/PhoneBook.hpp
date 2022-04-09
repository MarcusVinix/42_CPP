/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:40:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/18 13:14:35 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook {
public:

	PhoneBook( void );
	~PhoneBook( void );

	void			printAllContacts();
	void			searchContacts();
	void			setNewContact();
	void			setCurrentId(int id);

	int				total;

private:

	Contact			_contacts[8];
	int				_currentId;
};

#endif