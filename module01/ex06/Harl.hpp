/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:54:02 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/23 10:48:22 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

class Harl {

private:

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
	void	_unknown( void );
	void	_levelAndAbove(int i);

public:

	Harl( void );
	~Harl( void );

	void	complain( std::string level );

};

#endif