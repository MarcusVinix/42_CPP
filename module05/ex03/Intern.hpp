/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:00:04 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 16:41:02 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "./previous/PresidentialPardonForm.hpp"
#include "./previous/RobotomyRequestForm.hpp"
#include "./previous/ShrubberyCreationForm.hpp"

class Intern {

private:

	Form * _presidential( std::string target );
	Form * _robotomy( std::string target );
	Form * _shrubbery( std::string target );
	Form * _unknown( std::string target );

public:

	Intern( void );
	Intern( Intern const & rhs );
	~Intern();
	Intern & operator=( Intern const & rhs );

	Form * makeForm( std::string formName, std::string target );

	class FormUnknown : public std::exception {
		virtual const char* what( void ) const throw();
	};

	class NoTarget : public std::exception {
		virtual const char* what( void ) const throw();
	};
};

#endif