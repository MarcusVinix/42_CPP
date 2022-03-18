/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_stream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:11:57 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/14 11:29:29 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	char buff[521];

	// std::cout = Standard output stream, 
	// std::endl para quebrar a linha.
	std::cout << "Hello world !" << std::endl;

	std::cout << "Input a word: ";
	// std::cin Standard input stream
	std::cin >> buff;
	std::cout << "You entered : [" << buff << "]" << std::endl;

	return 0;
}