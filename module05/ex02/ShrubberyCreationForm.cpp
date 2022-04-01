/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:14:46 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/31 11:45:03 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
	Form( "ShruberryForm", 145, 137 ), _target( "Art" ) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	Form( "ShruberryForm", 145, 137 ), _target( target ) {
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & rhs ) :
	Form( "ShruberryForm", 145, 137 ) {
	*this = rhs;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	this->_target = rhs._target;
	return ( *this );
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->mayExecute( executor ) == false)
		return ;
	std::string	nameFile = this->_target + "_shrubbery";
	std::ofstream file;
	file.open(nameFile.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!file.is_open())
	{
		std::cout << "Something wrong creating the _shrubbery file" << std::endl;
		file.close();
		return ;
	}

	file	<< "           ,@@@@@@@,\n"
		<< "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		<< "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		<< "       |o|        | |         | |\n"
		<< "       |.|        | |         | |\n"
		<< "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	file.close();
	
	std::cout << "ASCII trees created!" << std::endl;
	return ;
}
