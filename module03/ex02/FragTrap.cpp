/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:32:55 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 20:46:22 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & rhs ) : ClapTrap( rhs ) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = rhs;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap( name ) {
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=( const FragTrap & rhs ) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return ( *this );
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << this->_name;
	std::cout << " 😎 Hey Everybody 🖖!" << std::endl;
}
