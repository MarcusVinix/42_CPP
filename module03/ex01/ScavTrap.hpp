/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:05:09 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 11:39:00 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( const ScavTrap & rhs );
	ScavTrap( std::string const & name );
	~ScavTrap( void );

	ScavTrap & operator=( ScavTrap const & rhs );

	void	guardGate( void );
	void	attack( const std::string&  target );

};

#endif