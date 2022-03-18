/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:38:37 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/14 12:43:05 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main() {
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instace.publicFoo: " << instance.publicFoo << std::endl;
	
	// instance._privateFoo = 42;
	// std::cout << "instace._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
	// instance._privateBar();
	return 0;
}