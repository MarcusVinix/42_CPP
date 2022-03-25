/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:09:17 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/24 23:14:11 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap art( "Art" );

	art.attack( "Agrona" );
	art.takeDamage( 3 );
	art.beRepaired( 3 );
	return ( 0 );
}