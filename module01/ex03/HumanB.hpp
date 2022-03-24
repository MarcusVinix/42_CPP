/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:27:28 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 16:16:30 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

private:

	std::string	_name;
	Weapon		*_weapon;

public:

	HumanB( std::string	name );
	~HumanB( void );

	void		attack( void );
	void		setWeapon( Weapon &weapon );
};

#endif