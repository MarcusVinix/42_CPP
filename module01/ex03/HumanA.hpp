/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:27:28 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 16:02:15 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

private:

	std::string	_name;
	Weapon		&_weapon;

public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void		attack( void );

};

#endif