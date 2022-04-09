/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:39:31 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/18 13:12:15 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
public:

	Contact( void );
	~Contact( void );

	void		printContact();
	std::string	resizeAtributteToPrint(std::string str);
	void		printHeader();
	bool		isOnlyAlpha(std::string str);
	bool		isOnlyDigit(std::string str);
	void		printContactFull();

	void		setFirstName();
	void		setLastName();
	void		setPhoneNumber();
	void		setDarkestSecret();
	void		setNickname();

	int			index;

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_darkestSecret;
	std::string	_phoneNumber;

};
#endif