/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:04:40 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/30 15:56:52 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat {

private:

	const std::string	_name;
	unsigned int		_grade;

public:

	Bureaucrat( void );
	Bureaucrat( std::string name, unsigned int grade );
	Bureaucrat( Bureaucrat const & rhs );
	~Bureaucrat( void );
	Bureaucrat & operator=( Bureaucrat const & rhs );

	std::string		getName( void ) const;
	unsigned int	getGrade( void ) const;
	void			decrementGrade( void );
	void			incrementGrade( void );

	class GradeTooHighException  : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what( void ) const throw();
	};

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif