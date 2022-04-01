/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:58:58 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 09:01:01 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "./previous/Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

private:

	std::string	_target;

public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & rhs );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );

	void	execute( Bureaucrat const & executor ) const;
};

#endif