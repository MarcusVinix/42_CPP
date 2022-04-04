/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:44:02 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/03 21:53:12 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
T	max( T const & x, T const & y ) {
	return ( ( x > y ) ? x : y );
}

template< typename T >
T	min( T const & x, T const & y ) {
	return ( ( x < y ) ? x : y );
}

template< typename T >
void swap( T & x, T & y ) {
	T tmp = x;
	x = y;
	y = tmp;
	return ;
}

#endif