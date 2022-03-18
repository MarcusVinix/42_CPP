/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:31:11 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/14 12:27:07 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2( float const f )
		: pi(f), qd(42) {
	std::cout << "Constructor called" << std::endl;

	return;
}

Sample2::~Sample2( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample2::bar( void ) const {
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	return ;
}
