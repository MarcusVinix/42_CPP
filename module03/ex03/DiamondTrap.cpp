/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:15:07 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 20:43:19 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap( ) {
	this->_name = "";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string const & name ) 
	: ClapTrap( name + "_clap_name" ) {
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Name DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap & rhs ) : ClapTrap( rhs ), FragTrap( rhs ), ScavTrap( rhs ) {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = rhs;
	return ;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Default DiamondTrap descructor called" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs ) {
	std::cout << "Copy DiamondTrap assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return ( *this );
}

void	DiamondTrap::attack( std::string const & target ) {
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "I'm DiamondTrap "
		<< this->_name << " and ClapTrap " << this->ClapTrap::_name
		<< std::endl;
}
