/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:35:03 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/11 11:31:25 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class Span {

private:

	std::vector<int>	_numbers;
	unsigned int		_N;

public:
	Span( void );
	Span( unsigned int N );
	Span( Span const & rhs );
	~Span( void );
	Span & operator=( Span const & rhs );

	void	addNumber( int n );
	void	addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
	int		shortestSpan( void );
	int		longestSpan( void );

	class SpanFullFill : public std::exception {
		virtual const char* what() const throw();
	};

	class SpanEmpty : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif