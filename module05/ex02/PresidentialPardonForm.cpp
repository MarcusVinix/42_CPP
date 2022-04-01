/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:14:46 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 11:45:03 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	Form( "PresidentialForm", 25, 5 ), _target( "Art" ) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	Form( "PresidentialForm", 25, 5 ), _target( target ) {
		return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & rhs ) :
	Form( "PresidentialForm", 25, 5 ) {
	*this = rhs;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	this->_target = rhs._target;
	return ( *this );
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->mayExecute( executor ) == false)
		return ;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
	return ;
}
