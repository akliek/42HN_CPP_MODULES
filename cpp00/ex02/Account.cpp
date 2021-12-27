#include <iostream>
#include "Account.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _nbAccounts;
	this->_accountIndex = _nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	std::cout << ";amount:" << this->_amount;
	Account::_totalAmount += this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= Account::checkAmount();
}

bool    Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	std::cout << withdrawal;
	this->_amount -= withdrawal;
	_totalAmount -=withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:1" << std::endl;
	this->_nbWithdrawals = 1;
	_totalNbWithdrawals++;
	return (1);
}

void    Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:1" << std::endl;
	this->_nbDeposits = 1;
	_totalNbDeposits++;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}

void    Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

int		Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}
