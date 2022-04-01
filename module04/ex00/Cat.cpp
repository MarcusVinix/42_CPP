/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:17:42 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/28 11:02:59 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	this->_type = "Cat";
	std::cout << "Default constructor Cat called" << std::endl;
	return ;
}

Cat::Cat( Cat const & rhs ) : Animal( rhs ){
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = rhs;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Default destructor Cat called" << std::endl;
	return ;
}

Cat & Cat::operator=( Cat const & rhs ) {
	std::cout << "Copy assignment Cat operator called" << std::endl;
	this->_type = rhs._type;
	return ( *this );
}

void	Cat::makeSound( void ) const {
	std::cout << "Meowwwwwww...Meowwwwwwwwww..." << std::endl;
	return ;
}