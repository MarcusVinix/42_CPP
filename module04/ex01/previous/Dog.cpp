/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:17:42 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/29 10:24:36 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	this->_type = "Dog";
	this->_brain = new Brain( );
	std::cout << "Default constructor Dog called" << std::endl;
	return ;
}

Dog::Dog( Dog const & rhs ) : Animal( rhs ){
	std::cout << "Copy constructor Dog called" << std::endl;
	this->_brain = new Brain( );
	*this = rhs;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Default destructor Dog called" << std::endl;
	delete this->_brain;
	return ;
}

Dog & Dog::operator=( Dog const & rhs ) {
	std::cout << "Copy assignment Dog operator called" << std::endl;
	this->_type = rhs._type;
	*(this->_brain) = *(rhs._brain);
	return ( *this );
}

void	Dog::makeSound( void ) const {
	std::cout << "Au Au....Au Au....Au Au....Au Au" << std::endl;
	return ;
}

std::string	Dog::getIdeas( int index ) {
	return (this->_brain->getIdeas(index));
}

void		Dog::setIdeas( int index, std::string idea ) {
	this->_brain->setIdeas( index, idea );
}
