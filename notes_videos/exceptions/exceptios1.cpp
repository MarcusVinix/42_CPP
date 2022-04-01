/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptios1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:28:40 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/29 14:36:35 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

voidd test1()
{
	class MyException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Some problems exists!");
			}
	}

	try
	{
		/* code */
	}
	catch(MyException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}