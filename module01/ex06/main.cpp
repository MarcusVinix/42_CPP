/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:49:53 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/23 10:25:11 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char *argv[] ) {
	Harl instance = Harl();

	if (argc != 2)
	{
		std::cout << "Wrong parameters level!" << std::endl;
		return (1);
	}
	instance.complain(argv[1]);

	return (0);
}