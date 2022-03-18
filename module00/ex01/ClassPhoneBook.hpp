/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:40:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/18 13:14:35 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONE_BOOK_HPP
# define CLASS_PHONE_BOOK_HPP

#include "ClassContact.hpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <iomanip>

class ClassPhoneBook {
public:

	ClassPhoneBook( void );
	~ClassPhoneBook( void );

	void			printAllContacts();
	void			searchContacts();
	void			setNewContact();
	void			setCurrentId(int id);

	int				total;

private:

	ClassContact	_contacts[8];
	int				_currentId;
};

#endif