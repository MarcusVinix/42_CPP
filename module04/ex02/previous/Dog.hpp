/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:09:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/29 11:18:25 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "../Brain.hpp"

class Dog : public AAnimal {

private:

	Brain	*_brain;

public:

	Dog( void );
	Dog( Dog const & rhs );
	~Dog( void );
	Dog & operator=( Dog const & rhs );

	void		makeSound( void ) const ;
	std::string	getIdeas( int index );
	void		setIdeas( int index, std::string idea );
};

#endif