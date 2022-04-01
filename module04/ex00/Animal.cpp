/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:17:42 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/28 11:03:03 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Dragon" ) {
	std::cout << "Default constructor Animal called" << std::endl;
	return ;
}

Animal::Animal( Animal const & rhs ) {
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = rhs;
	return ;
}

Animal::~Animal( void ) {
	std::cout << "Default destructor Animal called" << std::endl;
	return ;
}

Animal & Animal::operator=( Animal const & rhs ) {
	std::cout << "Copy assignment Animal operator called" << std::endl;
	this->_type = rhs._type;
	return ( *this );
}

void	Animal::makeSound( void ) const {
	std::cout << "Roar...Roar...Rawr...Rawrrrrrrrrrr" << std::endl;
	return ;
}

std::string		Animal::getType( void ) const {
	return (this->_type);
}
