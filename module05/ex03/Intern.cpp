/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:10:23 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 16:42:37 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	return ;
}

Intern::Intern( Intern const & rhs ) {
	*this = rhs;
	return ;
}

Intern::~Intern() {
	return ;
}

Intern &Intern::operator=( Intern const & rhs ) {
	*this = rhs;
	return ( *this );
}

Form * Intern::_presidential( std::string target ) {
	Form * form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}

Form * Intern::_robotomy( std::string target ) {
	Form * form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}
Form * Intern::_shrubbery( std::string target ) {
	Form * form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return ( form );
}

Form * Intern::_unknown( std::string target ) {
	(void)target;
	throw FormUnknown();
	return (NULL);
}

const char* Intern::FormUnknown::what( void ) const throw() {
	return ( "Form Unknown!!" );
}

const char* Intern::NoTarget::what( void ) const throw() {
	return ( "No target passed!!" );
}

Form * Intern::makeForm( std::string formName, std::string target ) {
	if (target.empty())
	{
		throw NoTarget();
		return ( NULL );
	}
	Form * ( Intern::*f[] ) ( std::string ) = { &Intern::_presidential, &Intern::_robotomy, &Intern::_shrubbery, &Intern::_unknown };
	std::string forms[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	for (int i = 0; i < 3; i++)
		if (forms[i] == formName)
			return ( ( this->*f[i] ) ( target ) );
	return ( ( this->*f[3] ) ( target ) );
}
