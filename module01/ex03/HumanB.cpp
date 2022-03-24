/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:56:45 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 16:16:21 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string	name ) : _name(name) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void		HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their "
		<< this->_weapon->getType() << std::endl;
}

void		HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}
