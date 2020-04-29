/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/23/2019
 * Due date: 3/4/2019
 * Assignment 3
 * Bank Management System
 * Class chequingAccount
 * Attributes: account number, balance, transaction fee, account owner
 * Additional attributes: privilege to write cheques, overdraft limit
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "chequingAccount.h"
#include "customer.h"

using namespace std;

// default constructor
chequingAccount::chequingAccount():account() 
{
    chequePrivelage = true;
    overdraftLimit = 155.43;
}

// regular construction
chequingAccount::chequingAccount(int accountId, float balance, float transactionFee, customer* Customer, bool chequePrivelage, float overdraftLimit):account(accountId, balance, transactionFee, Customer) 
{
    this->chequePrivelage = chequePrivelage;
    this->overdraftLimit = overdraftLimit;
}

// destructor
chequingAccount::~chequingAccount()
{
    // Do nothing
}

// set the privilege of writing cheques
void chequingAccount::setChequePrivilege(bool chequePrivelage)
{
    this->chequePrivelage = chequePrivelage;
}

// set the overdraft limit
void chequingAccount::setOverdraft(float overdraftLimit)
{
    this->overdraftLimit = overdraftLimit;
}

// returns the privilege of writing cheques
bool chequingAccount::getChequePrivilege()
{
    return chequePrivelage;
}

// returns the overdraft of the account
float chequingAccount::getOverdraft()
{
    return overdraftLimit;
}

// Print information about the account
void chequingAccount::printAccount()
{
    cout << "Chequing account information:\n";
   
    cout << "Account number: " << getAccountID() << "\n";
    cout << "Balance: " << getBalance() << "\n";
    cout << "Transaction fee: " << getTransactionFee() << "\n";
    cout << "Account owner: " << getCustomer()->getFName() << " " << getCustomer()->getLName() << "\n";
    
    if(getChequePrivilege() == true)
    {
        cout << "Account has the privilege to write cheques \n";
    }
    else
    {
        cout << "Account does not have the privilege to write cheques \n";
    }
    
    cout << "Overdraft limit: " << getOverdraft() << "\n";
}


