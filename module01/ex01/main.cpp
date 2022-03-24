/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:13:47 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/22 12:24:29 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieUtils.hpp"

int	main( void ) {
	ZombieUtils	utils;
	Zombie		*zombies;

	utils = ZombieUtils();
	zombies = utils.zombieHordede(9, "YEAh!");
	for (int i = 0; i < 7; i++)
	{
		std::cout << i + 1 << " ";
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}