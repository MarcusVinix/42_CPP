/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:38:26 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/18 13:08:58 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "ClassContact.hpp"
#include "ClassPhoneBook.hpp"

int	main(void) {
	std::string option;
	ClassPhoneBook phoneBook;

	do
	{
		std::cout << "<--------------------------------------------------------->" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, option);
		if (option.compare("ADD") == 0)
			phoneBook.setNewContact();
		if (option.compare("SEARCH") == 0)
			phoneBook.searchContacts();
		if (option.compare("EXIT") == 0)
			break;
		option.clear();
	} while (true);
	
}
