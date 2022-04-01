/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:06:06 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/28 16:58:34 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {

private:

	std::string	_ideas[100];

public:

	Brain( void );
	Brain( Brain const & rhs );
	~Brain( void );
	Brain & operator=( Brain const & rhs );

	std::string	getIdeas( int index );
	void		setIdeas( int index, std::string idea );

};

#endif