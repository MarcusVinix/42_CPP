/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:41:43 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 11:30:24 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

protected:
	
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

public:

	ClapTrap( void );
	ClapTrap( std::string const &name );
	ClapTrap( const ClapTrap &clapTrap );
	~ClapTrap( void );
	ClapTrap & operator=( ClapTrap const & rhs );

	void	attack( const std::string&  target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	
};

#endif
