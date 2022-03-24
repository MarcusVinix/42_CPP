/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:45:05 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 16:02:10 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string	name, Weapon &weapon )
	: _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void		HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}
