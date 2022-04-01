/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:09:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/29 10:40:08 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAANIMAL_HPP
# define AAANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {

protected:

	std::string	_type;

public:

	AAnimal( void );
	AAnimal( AAnimal const & rhs );
	virtual ~AAnimal( void );
	AAnimal & operator=( AAnimal const & rhs );

	virtual void	makeSound( void ) const = 0;
	std::string		getType( void ) const;
};

#endif