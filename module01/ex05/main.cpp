/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 08:49:53 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/06 08:54:10 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void ) {
	Harl instance = Harl();

	std::cout << "DEBUG" << std::endl;
	instance.complain("DEBUG");
	std::cout << "INFO" << std::endl;
	instance.complain("INFO");
	std::cout << "WARNING" << std::endl;
	instance.complain("WARNING");
	std::cout << "ERROR" << std::endl;
	instance.complain("ERROR");

	return (0);
}