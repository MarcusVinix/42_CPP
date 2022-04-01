/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:14:46 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 11:45:03 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	Form( "RobotomyForm", 72, 45 ), _target( "Art" ) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	Form( "RobotomyForm", 72, 45 ), _target( target ) {
		return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & rhs ) :
	Form( "RobotomyForm", 72, 45 ) {
	*this = rhs;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	this->_target = rhs._target;
	return ( *this );
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->mayExecute( executor ) == false)
		return ;
	std::cout << "Bzzz..Zzzzzz...Xxx...Pxxx*...***" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << "The " << this->_target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "The robotomy of " << this->_target << " failed! :(" << std::endl;
	return ;
}
