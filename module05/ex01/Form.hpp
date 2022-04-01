/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:15:31 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/30 17:31:10 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "./previous/Bureaucrat.hpp"

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
	~Form( void );
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


};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif