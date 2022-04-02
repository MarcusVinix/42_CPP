/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:58:31 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/01 18:11:20 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate( void ) {
	srand(time(NULL));
	int	num = std::rand() % 3;

	if (num == 0)
			return ( new A() );
	else if (num == 1)
		return ( new B() );
	else
		return ( new C() );
}

void	identify( Base *p ) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base not found!" << std::endl;
}

void	identify( Base &p ) {
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	} catch( ... ) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	} catch( ... ) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	} catch( ... ) {}
}

int	main( void ) {
	{
		Base *base = generate();
		std::cout << "First test with dynamic casting" << std::endl;
		std::cout << "Base &p is:  ";
		identify(*base);

		delete base;
	}
	{
		Base *base = new Base();
		std::cout << "Second test with dynamic casting" << std::endl;
		std::cout << "Base *p is:  ";
		identify(base);

		delete base;
	}

	return ( 0 );
}