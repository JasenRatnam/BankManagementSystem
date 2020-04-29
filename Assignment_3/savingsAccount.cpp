/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/23/2019
 * Due date: 3/4/2019
 * Assignment 3
 * Bank Management System
 * Class savingsAccount
 * Attributes: account number, balance, transaction fee, account owner
 * Additional attributes: Maximum number of transactions, interest rate
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "savingsAccount.h"
#include "customer.h"

using namespace std;

// default constructor
savingsAccount::savingsAccount(): account() 
{
    interestRate = 21.5;
    maxNumbTransactions = 15;
}

// regular constructor
savingsAccount::savingsAccount(int accountId, float balance, float transactionFee, customer* Customer, int maxNumbTransactions, double interestRate): account(accountId, balance, transactionFee, Customer)
{
    this->interestRate = interestRate;
    this->maxNumbTransactions = maxNumbTransactions;
}

// destructor
savingsAccount::~savingsAccount()
{
    // do nothing
}

// set the maximum number of transactions
void savingsAccount::setMaxNumbOfTransactions(int maxNumb)
{
    this->maxNumbTransactions = maxNumb;
}

// sets the interest rate
void savingsAccount::setInterestRate(double interestRate)
{
    this->interestRate = interestRate;
}

// returns the maximum number of transactions
int savingsAccount::getMaxNumbOfTransactions()
{
    return maxNumbTransactions;
}

// returns the interest rate
double savingsAccount::getInterestRate()
{
    return interestRate;
}

// Print information about the account
void savingsAccount::printAccount()
{
    cout << "Saving account information:\n";
   
    cout << "Account number: " << getAccountID() << "\n";
    cout << "Balance: " << getBalance() << "\n";
    cout << "Transaction fee: " << getTransactionFee() << "\n";
    cout << "Account owner: " << getCustomer()->getFName() << " " << getCustomer()->getLName() << "\n";
    cout << "Maximum number of transactions: " << getMaxNumbOfTransactions() << "\n";
    cout << "Interest rate: " << getInterestRate() << "\n";
}


