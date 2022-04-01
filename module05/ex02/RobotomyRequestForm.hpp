/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:58:58 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 09:01:01 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "./previous/Form.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public Form {

private:

	std::string	_target;

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & rhs );
	~RobotomyRequestForm( void );
	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

	void	execute( Bureaucrat const & executor ) const;
};

#endif