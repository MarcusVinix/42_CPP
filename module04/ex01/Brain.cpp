/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:08:34 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/29 10:28:24 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default constructor Brain called" << std::endl;
	return ;
}

Brain::Brain( Brain const & rhs ) {
	std::cout << "copy constructor Brain called" << std::endl;
	*this = rhs;
	return ;
}

Brain::~Brain( void ) {
	std::cout << "Default destructor Brain called" << std::endl;
	return ;
}

Brain & Brain::operator=( Brain const & rhs ) {
	std::cout << "copy operator Brain called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = rhs._ideas[i];
	}
	return ( *this );
}

std::string	Brain::getIdeas( int index ) {
	if (index >= 0 && index < 100)
		return ( this->_ideas[index] );
	else
		return ( "" );
}

void		Brain::setIdeas( int index, std::string idea ) {
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	else
		std::cout << "wrong index!" << std::endl;
}