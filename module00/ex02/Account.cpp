/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:09:15 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/18 19:06:38 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit ) : _amount(initial_deposit) {
	this->_accountIndex = Account::getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts += 1;

	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created" << std::endl;
}

Account::Account( void ) {
	this->_accountIndex = this->_nbAccounts;
	this->_nbWithdrawals = 0;
	this->_nbAccounts += 1;
}

Account::~Account( void ) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";"
		<< "deposits:" << Account::getNbDeposits() << ";"
		<< "withdrawals:" << Account::getNbWithdrawals()
		<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	if (deposit < 0)
		return ;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << (this->_amount - deposit) << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";"
		<< "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amout:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t		timer;
	struct tm	*date;

	time(&timer);
	date = localtime(&timer);
	std::cout.fill('0');
	std::cout << date->tm_year + 1900
		<< std::setw(2) << date->tm_mon + 1
		<< std::setw(2) << date->tm_mday
		<< "_"
		<< std::setw(2) << date->tm_hour
		<< std::setw(2) << date->tm_min
		<< std::setw(2) << date->tm_sec;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;