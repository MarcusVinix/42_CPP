/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:57:29 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/01 18:10:44 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base { public: virtual ~Base( void ) {} };

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate( void );
void	identify( Base *p );
void	identify( Base &p );

#endif