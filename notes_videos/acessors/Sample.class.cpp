/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:32:02 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/15 14:56:04 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {
	std::cout << "Constructor calle" << std::endl;
	return ;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Sample::getFoo( void ) const {
	return this->_foo;
}

void	Sample::setFoo( int v ) {
	if ( v >= 0 )
		this->_foo = v;
	return ;
}