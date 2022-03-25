/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 23:09:17 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 12:52:55 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void ) {
	FragTrap art( "Art" );

	art.attack( "Agrona" );
	art.takeDamage( 3 );
	art.takeDamage( 50 );
	art.beRepaired( 3 );
	art.highFivesGuys( );
	art.takeDamage( 50 );
	art.highFivesGuys( );

	return ( 0 );
}