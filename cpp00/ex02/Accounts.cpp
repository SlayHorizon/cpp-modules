#include "Account.hpp"

#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
};


int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
};


int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}


int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}


void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() <<
		";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() <<
		std::endl;;
}


Account::Account(int base_amount)
{
	this->_accountIndex = this->_nbAccounts;
	this->_amount = base_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
		";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}


Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
		";amount:" << this->_amount
		<< ";closed" << std::endl;
}


void	Account::makeDeposit(int deposit)
{
	int	previous_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex <<
		";p_amount:" << previous_amount <<
		";deposit:" << deposit << ";amount:" << this->_amount <<
		";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}


bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_amount)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex <<
			";p_amount:" << this->_amount <<
			";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		int new_amount = this->_amount - withdrawal;
		this->_nbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex <<
			";p_amount:" << this->_amount <<
			";withdrawal:" << withdrawal << ";amount:" << new_amount <<
			";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount = new_amount;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return true;
	}
}


int	Account::checkAmount(void) const
{
	return this->_amount;
}


void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
		";amount:" << this->_amount <<
		";deposits:" << this->_nbDeposits << ";withdrawals:" <<
		this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
	time_t now = std::time(NULL);
	struct tm timenow = *std::localtime(&now);

	std::cout << "[" << timenow.tm_year + 1900 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mon + 1 <<
	std::setfill('0') << std::setw(2) << timenow.tm_mday << "_" <<
	std::setfill('0') << std::setw(2) << timenow.tm_hour <<
	std::setfill('0') << std::setw(2) << timenow.tm_min <<
	std::setfill('0') << std::setw(2) << timenow.tm_sec <<
	"] ";
}
