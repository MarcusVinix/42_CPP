/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:09:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/28 11:14:48 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {

protected:

	std::string	_type;

public:

	Animal( void );
	Animal( Animal const & rhs );
	virtual ~Animal( void );
	Animal & operator=( Animal const & rhs );

	virtual void	makeSound( void ) const ;
	std::string		getType( void ) const;
};

#endif