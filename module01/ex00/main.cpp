/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:34:40 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 11:40:48 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieUtils.hpp"

int	main( void ) {
	ZombieUtils utils = ZombieUtils();
	Zombie*	zombiePtr = utils.newZombie("Leywin");
	zombiePtr->announce();
	utils.randomChump("Art");
	delete zombiePtr;
	return (0);
}
