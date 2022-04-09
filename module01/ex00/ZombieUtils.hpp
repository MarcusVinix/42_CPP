/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieUtils.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:20:39 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/06 08:37:25 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_UTILS_HPP
# define ZOMBIE_UTILS_HPP

#include "Zombie.hpp"

class ZombieUtils {

public:

	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );

};

#endif
