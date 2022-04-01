/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:09:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/28 11:17:48 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {

protected:

	std::string	_type;

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & rhs );
	~WrongAnimal( void );
	WrongAnimal & operator=( WrongAnimal const & rhs );

	void			makeSound( void ) const ;
	std::string		getType( void ) const;
};

#endif