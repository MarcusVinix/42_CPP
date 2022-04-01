/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:37:06 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/30 17:29:53 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) 
	: _name( "Grey" ), _signed( false ), _gradeRequired( 150 ), _gradeExec( 150 ) {
	std::cout << "Default constructor Form called" << std::endl;
	return ;
}

Form::Form( std::string name, int gradeRequired, int gradeExec ) 
	: _name( name ), _signed( false ), _gradeRequired( gradeRequired ), _gradeExec( gradeExec ) {
	std::cout << "Name constructor Form called" << std::endl;
	if (this->_gradeExec < 1 || this->_gradeRequired < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeExec > 150 || this->_gradeRequired > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form( void ) {
	std::cout << "Default destructor Form called" << std::endl;
	return ;
}

Form::Form( Form const & rhs ) 
	: _name( rhs.getName() ), _signed( rhs.getSigned() ),
	_gradeRequired( rhs.getGradeRequired() ), _gradeExec( rhs.getGradeExec() ){
	std::cout << "copy constructor Bureaucrat called" << std::endl;
	*this = rhs;
	return ;
}

Form & Form::operator=( Form const & rhs ) {
	std::cout << "copy operator Form called" << std::endl;
	this->_signed = rhs.getSigned();
	*this = rhs;
	return ( *this );
}

const char* Form::GradeTooHighException::what( void ) const throw() {
	return ( "Grade is to high!!" );
}

const char* Form::GradeTooLowException::what( void ) const throw() {
	return ( "Grade is to low!!" );
}

std::string	Form::getName( void ) const {
	return ( this->_name );
}

int			Form::getGradeRequired( void ) const {
	return ( this->_gradeRequired );
}

int			Form::getGradeExec( void ) const {
	return ( this->_gradeExec );
}

bool		Form::getSigned( void ) const {
	return ( this->_signed );
}

void		Form::beSigned( Bureaucrat const & bureaucrat ) {
	if (bureaucrat.getGrade() <= this->_gradeRequired)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream & operator<<( std::ostream & o, Form const & rhs ) {
	o << "Name: " << rhs.getName() << std::endl;
	o << "Signed: " << rhs.getSigned() << std::endl;
	o << "Grade Exec: " << rhs.getGradeExec() << std::endl;
	o << "Grade required: " << rhs.getGradeRequired() << std::endl;
	return ( o );
}
