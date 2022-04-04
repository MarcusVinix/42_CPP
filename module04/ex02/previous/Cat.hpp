/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:09:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/29 11:18:20 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "../Brain.hpp"

class Cat : public AAnimal {

private:

	Brain	*_brain;

public:

	Cat( void );
	Cat( Cat const & rhs );
	~Cat( void );
	Cat & operator=( Cat const & rhs );

	void		makeSound( void ) const ;
	std::string	getIdeas( int index );
	void		setIdeas( int index, std::string idea );

};

#endif