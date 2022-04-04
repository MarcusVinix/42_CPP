/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:16:59 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/03 22:53:04 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void plusplus( int & i ) { i += 2; }
void addTBATE( std::string & str ) { str.append(" (TBATE)"); }

int main( void ) {
	int array[] = { 1, 2, 3, 4 } ;
	std::cout << "Array before iter: " << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << array[i] << std::endl;
	std::cout << std::endl;
	::iter(array, 4, &plusplus);
	std::cout << "Array after iter: " << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << array[i] << std::endl;
	std::cout << std::endl;

	std::string words[] = { "Grey", "Art", "King" };
	std::cout << "Array Words before iter: " << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << words[i] << std::endl;
	std::cout << std::endl;
	::iter(words, 3, &addTBATE);
	std::cout << "Array Words after iter: " << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << words[i] << std::endl;
	return ( 0 );
}