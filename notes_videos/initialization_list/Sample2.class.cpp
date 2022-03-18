/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:31:11 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/14 12:15:09 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

//better way to start the atributes of the class
//This is called initialization list
Sample2::Sample2( char p1, int p2, float p3 )
		: a1(p1), a2(p2), a3(p3) {
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1: " << this->a1 << std::endl;
	std::cout << "this->a2: " << this->a2 << std::endl;
	std::cout << "this->a3: " << this->a3 << std::endl;

	return;
}

Sample2::~Sample2( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}
