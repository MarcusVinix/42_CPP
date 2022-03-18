/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estudy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:04:56 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/14 11:11:00 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	g_var = 1;
int f( void ) { return 2; }

namespace Foo {
	int	g_var = 3;
	int f( void ) { return 4; }
}

namespace Bar {
	int	g_var = 5;
	int f( void ) { return 6; }
}

namespace Muf = Bar;

int	main(void) {
	printf("g_var: 		[%d]\n", g_var);
	printf("f()         [%d]\n\n", f());

	printf("Foo::g_var:  [%d]\n", Foo::g_var);
	printf("Foo::f()         [%d]\n\n", Foo::f());

	printf("Bar::g_var:  [%d]\n", Bar::g_var);
	printf("Bar::f()         [%d]\n\n", Bar::f());

	printf("Muf::g_var:  [%d]\n", Muf::g_var);
	printf("Muf::f()         [%d]\n\n", Muf::f());
	
	printf("::g_var:  [%d]\n", ::g_var);
	printf("::f()         [%d]\n\n", ::f());
	return (0);
}