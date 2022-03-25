/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:46:42 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/24 11:50:54 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERITAGE1_HPP
# define HERITAGE1_HPP

#include <iostream>
#include <string>

class Cat
{
private:
	int _numberOfLegs;
public:
	Cat( );
	Cat( Cat const & );
	Cat& operator=(Cat const &);
	~Cat( );

	void	run( int distance );
	void	scornSomeone( std::string const & target );
};

class Pony
{
private:
	int _numberOfLegs;
public:
	Pony( );
	Pony( Pony const & );
	Pony& operator=(Pony const &);
	~Pony( );

	void run( int distance );
	void doMagic( std::string const & target );
};

#endif