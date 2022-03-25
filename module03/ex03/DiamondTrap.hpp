/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:03:47 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 19:20:40 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:

	std::string	_name;

public:

	DiamondTrap( void );
	DiamondTrap( std::string const & name );
	DiamondTrap( const DiamondTrap & rhs );
	~DiamondTrap( void );

	DiamondTrap & operator=( DiamondTrap const & rhs );

	void	attack( std::string const & target );
	void	whoAmI( void );

};