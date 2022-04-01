/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:48:38 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 16:48:06 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "./previous/Form.hpp"

int	main( void )
{
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		grade.executeForm( *rrf );
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		rrf->execute( grade );
		delete rrf;
	}
	std::cout << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat grade = Bureaucrat("Grey", 1);
		rrf->beSigned( grade );
		rrf->execute( grade );
		delete rrf;
	}
	std::cout << std::endl;
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm(" creation", "Bender");
		delete rrf;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm(" creation", "");
		delete rrf;
	} catch ( std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}