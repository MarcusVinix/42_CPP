/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:41:26 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/18 13:18:28 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

ClassContact::ClassContact(void) {
	return ;
}

ClassContact::~ClassContact(void) {
	return ;
}

void	ClassContact::setFirstName() {
	std::string	name;

	while (true)
	{
		std::cout << "FirstName: ";
		std::getline(std::cin, name);
		if ((name.length() <= 1 || isOnlyAlpha(name) == false))
			std::cout << "Incorrect FirstName!" << std::endl;
		else
			break ;
	}
	this->_firstName = name;
	name.clear();
}

void	ClassContact::setLastName() {
	std::string lastName;

	while (true)
	{
		std::cout << "LastName: ";
		std::getline(std::cin, lastName);
		if (lastName.length() <= 1 || isOnlyAlpha(lastName) == false)
			std::cout << "Incorrect LastName!" << std::endl;
		else
			break ;
	}
	this->_lastName = lastName;
	lastName.clear();
}

void	ClassContact::setPhoneNumber() {
	std::string	number;

	while (true)
	{
		std::cout << "PhoneNumber: ";
		std::getline(std::cin, number);
		if (isOnlyDigit(number) == false)
			std::cout << "Incorrect PhoneNumber!" << std::endl;
		else
			break ;
	}
	this->_phoneNumber = number;
	number.clear();
}

void	ClassContact::setDarkestSecret() {
	std::string secret;

	while (true)
	{
		std::cout << "DarkestSecret: ";
		std::getline(std::cin, secret);
		if (secret.length() <= 1)
			std::cout << "Incorrect DarkestSecret!" << std::endl;
		else
			break ;
	}
	this->_darkestSecret = secret;
	secret.clear();
}

void	ClassContact::setNickname() {
	std::string nickName;

	while (true)
	{
		std::cout << "NickName: ";
		std::getline(std::cin, nickName);
		if (nickName.length() <= 1)
			std::cout << "Incorrect NickName!" << std::endl;
		else
			break ;
	}
	this->_nickname = nickName;
	nickName.clear();
}

bool	ClassContact::isOnlyAlpha(std::string str) {
	int	j = 0;

	for (int i = 0; str[i]; i++) {
		if (!isalpha(str[i]) && str[i] != ' ')
				return (false);
	}
	for (int i = 0; str[i]; i++) {
		if (isalpha(str[i]))
			j++;
	}
	if (j > 2)
		return (true);
	else
		return (false);
}

bool	ClassContact::isOnlyDigit(std::string str) {
	for (int i = 0; str[i]; i++) {
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

std::string	ClassContact::resizeAtributteToPrint(std::string str) {
	std::string	newStr;
	if (str.length() > 10)
	{
		newStr = str.substr(0, 10);
		newStr[9] = '.';
		return (newStr);
	}
	return (str);
}


void	ClassContact::printHeader()  {
	std::cout << std::right <<
		'|' << std::setw(10) << "index" <<
		'|' << std::setw(10) << "FirstName" <<
		'|' << std::setw(10) << "LastName" <<
		'|' << std::setw(10) << "Nickname" << "|" << std::endl;
}

void	ClassContact::printContact() {
	std::cout <<
		"|" << std::setw(10) << this->index <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_firstName) <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_lastName) <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_nickname) << "|" << std::endl;
}

void	ClassContact::printContactFull() {
	std::cout << std::right <<
		'|' << std::setw(10) << "index" <<
		'|' << std::setw(10) << "FirstName" <<
		'|' << std::setw(10) << "LastName" <<
		'|' << std::setw(10) << "Nickname" <<
		'|' << std::setw(10) << "Number" <<
		'|' << std::setw(10) << "Darkest" << "|" << std::endl;
	std::cout <<
		"|" << std::setw(10) << this->index <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_firstName) <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_lastName) <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_nickname) <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_phoneNumber) <<
		"|" << std::setw(10) << resizeAtributteToPrint(this->_darkestSecret) << "|" << std::endl;
}
