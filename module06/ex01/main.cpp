/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:43:08 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/01 17:49:05 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t	serialize( Data* ptr ) { return ( reinterpret_cast<uintptr_t>(ptr) ); }

Data*		deserialize( uintptr_t raw ) { return ( reinterpret_cast<Data *>(raw) ); }

int	main( void ) {
	uintptr_t	raw;
	Data		data;
	Data*		dataPtr;

	data.num = 42;
	std::cout << "Data address " << &data << std::endl;

	raw = serialize(&data);
	std::cout << "Serialize Data: " << raw << std::endl;

	dataPtr = deserialize(raw);
	std::cout << "Deserialization data: " << dataPtr << std::endl;
	return ( 0 );
}