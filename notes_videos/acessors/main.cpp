/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:38:37 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/15 14:54:07 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main() {
	Sample instance;

	instance.setFoo( 42 );
	std::cout << "instace.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo( -42 );
	std::cout << "instace.getFoo(): " << instance.getFoo() << std::endl;
	
	return 0;
}