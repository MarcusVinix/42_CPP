/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:15:31 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 11:42:02 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

	const std::string	_name;
	bool				_signed;
	const unsigned int	_gradeRequired;
	const unsigned int	_gradeExec;

public:

	Form( void );
	Form( std::string name, int gradeRequired, int gradeExec );
	virtual ~Form( void );
	Form( Form const & rhs );
	Form & operator=( Form const & rhs );

	std::string	getName( void ) const;
	int			getGradeRequired( void ) const;
	int			getGradeExec( void ) const;
	bool		getSigned( void ) const;

	void		beSigned( Bureaucrat const & bureaucrat );

	class GradeTooHighException : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class FormNotSignedException : public std::exception {
		virtual const char* what( void ) const throw();
	};

	bool			mayExecute( Bureaucrat const & executor ) const ;
	virtual void	execute(Bureaucrat const & executor) const = 0;


};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif