/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieUtils.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:20:39 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 11:28:02 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_UTILS
# define ZOMBIE_UTILS

#include "Zombie.hpp"

class ZombieUtils {

public:

	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );

};

#endif
