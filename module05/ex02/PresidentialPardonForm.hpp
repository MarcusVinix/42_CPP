/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:58:58 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 15:40:29 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "./previous/Form.hpp"

class PresidentialPardonForm : public Form {

private:

	std::string	_target;

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & rhs );
	~PresidentialPardonForm( void );
	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

	void	execute( Bureaucrat const & executor ) const;
};

#endif