/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:09:17 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 12:21:01 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap art( "Art" );

	art.attack( "Agrona" );
	art.takeDamage( 3 );
	art.takeDamage( 50 );
	art.beRepaired( 3 );
	art.guardGate( );
	art.takeDamage( 50 );
	art.guardGate( );


	return ( 0 );
}