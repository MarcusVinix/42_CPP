/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:48:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/30 16:10:23 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Art", 1);
		std::cout << gradeGood;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Art", 151);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Art", 0);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Art", 1);
		std::cout << gradeGood;
		gradeGood.incrementGrade();
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeGood = Bureaucrat("Art", 150);
		std::cout << gradeGood;
		gradeGood.decrementGrade();
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat gradeBad = Bureaucrat("Art", -30);
		std::cout << gradeBad;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return ( 0 );
}