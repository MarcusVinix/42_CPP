/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:37:30 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 10:24:34 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

# include <iostream>

class Integer {
	
public:

	Integer( int const n );
	~Integer (void);

	int getValue( void ) const;

	Integer &	operator=( Integer const & rhs );
	Integer		operator+( Integer const & rhs ) const;

private:

	int _n;
};

std::ostream & operator<<( std::ostream & o, Integer const & rhs );

#endif