/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:01:21 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/05 15:38:22 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFound : public std::exception {
	virtual const char* what() const throw() {
		return ( "Not found!" );
	};
};

template< typename T >
typename T::iterator	easyfind( T & container, int x) {
	typename T::iterator it;
	
	it = std::find( container.begin(), container.end(), x );
	if (it == container.end())
		throw NotFound();
	return ( it );
}

#endif