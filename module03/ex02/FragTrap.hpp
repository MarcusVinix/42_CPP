/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:22:55 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 12:51:45 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( const FragTrap & rhs );
	FragTrap( std::string const & name );
	~FragTrap( void );

	FragTrap & operator=( const FragTrap & rhs );

	void	highFivesGuys( void );
};

#endif