/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:17:42 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/29 10:21:10 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	this->_type = "Cat";
	this->_brain = new Brain( );
	std::cout << "Default constructor Cat called" << std::endl;
	return ;
}

Cat::Cat( Cat const & rhs ) : Animal( rhs ){
	std::cout << "Copy constructor Cat called" << std::endl;
	this->_brain = new Brain( );
	*this = rhs;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Default destructor Cat called" << std::endl;
	delete this->_brain;
	return ;
}

Cat & Cat::operator=( Cat const & rhs ) {
	std::cout << "Copy assignment Cat operator called" << std::endl;
	this->_type = rhs._type;
	*(this->_brain) = *(rhs._brain);
	return ( *this );
}

void	Cat::makeSound( void ) const {
	std::cout << "Meowwwwwww...Meowwwwwwwwww..." << std::endl;
	return ;
}

std::string	Cat::getIdeas( int index ) {
	return (this->_brain->getIdeas(index));
}

void		Cat::setIdeas( int index, std::string idea ) {
	this->_brain->setIdeas( index, idea );
}