/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:10:14 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/23 12:19:52 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawBit( 0 ) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int raw) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBit = raw << Fixed::_bits;
	return ;
}

Fixed::Fixed( const float raw) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBit = roundf( raw * (1 << Fixed::_bits) );
	return ;
}


Fixed::Fixed( Fixed const &fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {
	return (this->_rawBit);
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;

	this->_rawBit = rhs.getRawBits();
	return ( *this );
}

float	Fixed::toFloat( void ) const {
	return ( (float)this->_rawBit / (1 << Fixed::_bits) );
}

int		Fixed::toInt( void ) const {
	return ( this->_rawBit >> Fixed::_bits );
}

std::ostream & operator<<( std::ostream & out, Fixed const & rhs ) {
	out << rhs.toFloat();
	return ( out );
}

const int Fixed::_bits = 8;