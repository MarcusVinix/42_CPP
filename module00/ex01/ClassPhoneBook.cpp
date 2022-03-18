/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:41:04 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/18 13:16:21 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassPhoneBook.hpp"

ClassPhoneBook::ClassPhoneBook(void) {
	std::cout << "Welcome to PhoneBook!" << std::endl;
	std::cout << "Options available: " << std::endl;
	std::cout << "ADD: save a new contact." << std::endl;
	std::cout << "SEARCH: display a specific contact" << std::endl;
	std::cout << "EXIT: exit the program PhoneBook." << std::endl;

	this->_currentId = 0;
	this->total = 0;
	return ;
}

ClassPhoneBook::~ClassPhoneBook(void) {
	std::cout << "Thanks for using!" << std::endl;
	std::cout << "See ya!" << std::endl;
	return ;
}


void			ClassPhoneBook::setNewContact() {
	int	id;

	id = this->_currentId;
	this->_contacts[id].index = id + 1;
	this->_contacts[id].setFirstName();
	this->_contacts[id].setLastName();
	this->_contacts[id].setNickname();
	this->_contacts[id].setPhoneNumber();
	this->_contacts[id].setDarkestSecret();
	this->setCurrentId(1);
	if (this->total < 8)
		this->total++;
}

void		ClassPhoneBook::setCurrentId(int id) {
	if (this->_currentId == 7)
		this->_currentId = 0;
	else
		this->_currentId += id;
}

void		ClassPhoneBook::printAllContacts() {
	this->_contacts[0].printHeader();
	for (int i = 0; i < this->total; i++)
		this->_contacts[i].printContact();
}

void		ClassPhoneBook::searchContacts() {
	std::string	i;
	int			id;
	char 		str[500];

	std::cout << "All contacts: " << std::endl;
	ClassPhoneBook::printAllContacts();
	do {
		std::cout << "index: ";
		std::getline(std::cin, i);
		std::size_t len = i.copy(str, 1, 0);
		str[len] = '\0';
		id = atoi(str);
		if ((id < 1 || id > this->total))
			std::cout << "Wrong index!" << std::endl;
		else
			break ;
	}
	while (true);
	std::cout << "<--------------------------------------------------------->" << std::endl;
	this->_contacts[id - 1].printContactFull();
}