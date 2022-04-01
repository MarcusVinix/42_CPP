/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:09:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/28 11:03:22 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & rhs );
	~Dog( void );
	Dog & operator=( Dog const & rhs );

	void	makeSound( void ) const ;
};

#endif