/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:17:42 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/28 11:03:03 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "Dragon" ) {
	std::cout << "Default constructor AAnimal called" << std::endl;
	return ;
}

AAnimal::AAnimal( AAnimal const & rhs ) {
	std::cout << "Copy constructor AAnimal called" << std::endl;
	*this = rhs;
	return ;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Default destructor AAnimal called" << std::endl;
	return ;
}

AAnimal & AAnimal::operator=( AAnimal const & rhs ) {
	std::cout << "Copy assignment AAnimal operator called" << std::endl;
	this->_type = rhs._type;
	return ( *this );
}

std::string		AAnimal::getType( void ) const {
	return (this->_type);
}
