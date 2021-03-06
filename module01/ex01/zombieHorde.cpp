/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:09:58 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/06 08:38:56 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieUtils.hpp"

Zombie* ZombieUtils::zombieHorde( int N, std::string name ) {
	Zombie* zombie;

	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].setName(name);
	return (zombie);
}
