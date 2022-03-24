/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:25:22 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 11:29:46 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieUtils.hpp"

void	ZombieUtils::randomChump( std::string name ) {
	Zombie zombie = Zombie(name);

	zombie.announce();
}
