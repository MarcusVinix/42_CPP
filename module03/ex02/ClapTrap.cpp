/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:51:00 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/25 12:06:31 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: _name( "" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const &name )
	: _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ){
	std::cout << "Name ClapTrap constructor called" << std::endl;
	return ;
}


ClapTrap::ClapTrap( const ClapTrap &clapTrap ) {
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = clapTrap;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	std::cout << "Copy ClapTrap assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	return ( *this );
}

void	ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap " << this->_name;
	if (this->_energyPoints <= 0)
	{
		std::cout << "don't have energy or hit points to attack!"
			<< std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << " is dead!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << " attacks " << target << ", causing "
		<< this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "ClapTrap " << this->_name;
	if (this->_hitPoints <= 0) {
		std::cout << " is dead!" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << " its suffering " << amount << " points of damage, now ";
	if (this->_hitPoints <= 0)
	{
		std::cout << "he is dead!" << std::endl;
		return ;
	}
	std::cout << "getting " << this->_hitPoints << " health!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "ClapTrap " << this->_name;
	if (this->_energyPoints <= 0)
	{
		std::cout << "don't have energy or hit points to be repaired!"
			<< std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << " is dead!" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << " its repairing " << amount << " hit points, now "
		<< "getting " << this->_hitPoints << " health!" << std::endl;
}