/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 08:40:22 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/11 08:53:12 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// constructing deques
#include <iostream>
#include <deque>

// Deque is similar to array, but a different in some ways, array have the storage in one block
//but deque can be scattered in different chunks of storage.
int main ()
{
	unsigned int i;

	// constructors used in the same order as described above:
	std::deque<int> first;                                // empty deque of ints
	std::deque<int> second (4,100);                       // four ints with value 100
	std::deque<int> third (second.begin(),second.end());  // iterating through second
	std::deque<int> fourth (third);                       // a copy of third

	// the iterator constructor can be used to copy arrays:
	int myints[] = {16,2,77,29};
	std::deque<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

	std::cout << "The contents of fifth are:";
	for (std::deque<int>::iterator it = fifth.begin(); it!=fifth.end(); ++it)
	std::cout << ' ' << *it;

	std::cout << '\n';

	return 0;
}