/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:20:55 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 16:11:32 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

private:

	std::string	_type;

public:

	Weapon( std::string type );
	~Weapon( void );

	const std::string&	getType( void );
	void				setType( std::string type );

};

#endif
