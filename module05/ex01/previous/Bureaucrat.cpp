/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:25:36 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/30 18:05:38 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "Grey" ), _grade( 150 ) {
	std::cout << "Default constructor Bureaucrat called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name( name ) {
	std::cout << "Name/Grade constructor Bureaucrat called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & rhs ) : _name( rhs.getName() ), _grade( rhs.getGrade() ) {
	std::cout << "copy constructor Bureaucrat called" << std::endl;
	*this = rhs;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Default destructor Bureaucrat called" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ) {
	std::cout << "copy operator Bureaucrat called" << std::endl;
	this->_grade = rhs._grade;
	return ( *this );
}

std::string		Bureaucrat::getName( void ) const{
	return ( this->_name );
}

unsigned int	Bureaucrat::getGrade( void ) const{
	return ( this->_grade );
}

void			Bureaucrat::incrementGrade( void ) {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void			Bureaucrat::decrementGrade( void ) {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return ( "Bureaucrat grade is to high!!" );
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return ( "Bureaucrat grade is to low!!" );
}

void		Bureaucrat::signForm( Form & form ) {
	try {
		form.beSigned( *this );
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch( std::exception & e ) {
		std::cout << this->_name << " couldn't sign " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}


std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return ( o );
}

