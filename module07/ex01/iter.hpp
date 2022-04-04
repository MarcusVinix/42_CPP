/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:54:52 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/03 22:23:26 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void	iter( T * array , unsigned int length , void( *f )( T& ) ) {
	for ( unsigned int i = 0; i < length; i++)
		f( array[i] );
}

#endif