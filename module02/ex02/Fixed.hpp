/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FIXED.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:00:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/23 12:21:29 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

	int					_rawBit;
	static const int	_bits;

public:

	Fixed( void );
	Fixed( const int raw);
	Fixed( const float raw);
	Fixed( const Fixed &fixed );
	~Fixed( void );

	Fixed &	operator=( Fixed const & numb );

	bool operator>( Fixed const & rhs );
	bool operator<( Fixed const & rhs );
	bool operator>=( Fixed const & rhs );
	bool operator<=( Fixed const & rhs );
	bool operator==( Fixed const & rhs );
	bool operator!=( Fixed const & rhs );

	Fixed operator+( Fixed const & rhs );
	Fixed operator-( Fixed const & rhs );
	Fixed operator*( Fixed const & rhs );
	Fixed operator/( Fixed const & rhs );

	Fixed operator++( void );
	Fixed operator++( int );
	Fixed operator--( void );
	Fixed operator--( int );

	static Fixed & min( Fixed & rhs1, Fixed & rhs2 );
	static const Fixed & min( Fixed const & rhs1, Fixed const & rhs2 );
	static Fixed & max( Fixed & rhs1, Fixed & rhs2 );
	static const Fixed & max( Fixed const & rhs1, Fixed const & rhs2 );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

};

std::ostream & operator<<( std::ostream & out, Fixed const & rhs );

#endif