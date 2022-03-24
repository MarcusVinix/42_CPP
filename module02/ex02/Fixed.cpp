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
	return ;
}

Fixed::Fixed( const int raw ) {
	this->_rawBit = raw << Fixed::_bits;
	return ;
}

Fixed::Fixed( const float raw ) {
	this->_rawBit = roundf( raw * (1 << Fixed::_bits) );
	return ;
}


Fixed::Fixed( Fixed const &fixed ) {
	*this = fixed;
	return ;
}

Fixed::~Fixed( void ) {
	return ;
}

int		Fixed::getRawBits( void ) const {
	return (this->_rawBit);
}

void	Fixed::setRawBits( int const raw ) {
	this->_rawBit = raw;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
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

bool Fixed::operator>( Fixed const & rhs ) {
	return ( this->getRawBits( ) > rhs.getRawBits( ) );
}

bool Fixed::operator<( Fixed const & rhs ) {
	return ( this->getRawBits( ) < rhs.getRawBits( ) );
}

bool Fixed::operator>=( Fixed const & rhs ) {
	return ( this->getRawBits( ) >= rhs.getRawBits( ) );
}

bool Fixed::operator<=( Fixed const & rhs ) {
	return ( this->getRawBits( ) <= rhs.getRawBits( ) );
}

bool Fixed::operator==( Fixed const & rhs ) {
	return ( this->getRawBits( ) == rhs.getRawBits( ) );
}

bool Fixed::operator!=( Fixed const & rhs ) {
	return ( this->getRawBits( ) != rhs.getRawBits( ) );
}

Fixed Fixed::operator+( Fixed const & rhs ) {
	Fixed tmp;
	tmp.setRawBits( this->getRawBits( ) + rhs.getRawBits( ) );
	return ( tmp );
}

Fixed Fixed::operator-( Fixed const & rhs ) {
	Fixed tmp;
	tmp.setRawBits( this->getRawBits( ) - rhs.getRawBits( ) );
	return ( tmp );
}

Fixed Fixed::operator*( Fixed const & rhs ) {
	Fixed tmp;
	tmp.setRawBits( this->getRawBits( ) * rhs.getRawBits( ) >> Fixed::_bits );
	return ( tmp );
}

Fixed Fixed::operator/( Fixed const & rhs ) {
	Fixed tmp;
	tmp.setRawBits( this->getRawBits( ) / rhs.getRawBits( ) << Fixed::_bits );
	return ( tmp );
}

Fixed Fixed::operator++( void ) {
	Fixed tmp;
	tmp._rawBit = ++_rawBit;
	return ( tmp );
}

Fixed Fixed::operator++( int ) {
	Fixed tmp;
	tmp._rawBit = _rawBit++;
	return ( tmp );
}

Fixed Fixed::operator--( void ) {
	Fixed tmp;
	tmp._rawBit = --_rawBit;
	return ( tmp );
}

Fixed Fixed::operator--( int ) {
	Fixed tmp;
	tmp._rawBit = _rawBit--;
	return ( tmp );
}

Fixed & Fixed::min( Fixed & rhs1, Fixed & rhs2 ) {
	if (rhs1.getRawBits( ) < rhs2.getRawBits( ))
		return ( rhs1 );
	return ( rhs2 );
}

const Fixed & Fixed::min( Fixed const & rhs1, Fixed const & rhs2 ) {
	if (rhs1.getRawBits( ) < rhs2.getRawBits( ))
		return ( rhs1 );
	return ( rhs2 );
}

Fixed & Fixed::max( Fixed & rhs1, Fixed & rhs2 ) {
	if (rhs1.getRawBits( ) > rhs2.getRawBits( ))
		return ( rhs1 );
	return ( rhs2 );
}

const Fixed & Fixed::max( Fixed const & rhs1, Fixed const & rhs2 ) {
	if (rhs1.getRawBits( ) > rhs2.getRawBits( ))
		return ( rhs1 );
	return ( rhs2 );
}

const int Fixed::_bits = 8;