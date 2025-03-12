# include "Account.hpp"
# include <iostream>
# include <iomanip>
# include <string>

Account::Account(int initial_deposit)
{
	std::cout << "creator" << initial_deposit << std::endl;
}

Account::~Account()
{
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	std::cout << "nb accounts" << getNbAccounts() << std::endl;	
	std::cout << "total amount" << getTotalAmount() << std::endl;	
	std::cout << "nb deposits" << getNbDeposits() << std::endl;	
	std::cout << "nb with drawals" << getNbWithdrawals() << std::endl;	
}

void	Account::makeDeposit( int deposit )
{
}

bool	Account::makeWithdrawal( int withdrawal )
{
}

int		Account::checkAmount( void ) const
{
}

void	Account::displayStatus( void ) const
{
}
