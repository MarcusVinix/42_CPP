/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:27:56 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/08 09:35:10 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

int	main( void ) {
	{
		int myArray[5] = { 5, 10, 15, 20, 25 };
		std::vector<int> vec(myArray, myArray + sizeof(myArray) / sizeof(int) );
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			std::cout << ' ' << *it;
	}
	{
		std::vector<int> myVector ( 10 );
		std::vector<int>::size_type n = myVector.size();

		for (unsigned i = 0; i < n; i++) myVector[i] = i;
		std::cout << std::endl;
		for (unsigned i = 0; i < n; i++)
			std::cout << ' ' << myVector[i];
		std::cout << std::endl;

	}
	return ( 0 );
}