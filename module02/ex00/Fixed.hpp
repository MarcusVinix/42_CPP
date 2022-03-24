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

class Fixed {

private:

	int					_rawBit;
	static const int	_bits;

public:

	Fixed( void );
	Fixed( const Fixed &fixed );
	~Fixed( void );
	Fixed &	operator=( Fixed const & numb );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

#endif