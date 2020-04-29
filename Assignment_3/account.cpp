/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/23/2019
 * Due date: 3/4/2019
 * Assignment 3
 * Bank Management System
 * Class account
 * Attributes: account number, balance, transaction fee, account owner
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "account.h"
#include "customer.h"

using namespace std;

// default constructor
account::account()
{
    customer* owner;
    accountId = 4367373;
    balance = 146.23;
    transactionFee = 5.50;
    Customer = owner;
}

// regular constructor
account::account(int accountId, float balance, float transactionFee, customer* Customer) 
{
    this->accountId = accountId;
    this->balance = balance;
    this->transactionFee = transactionFee;
    this->Customer = Customer;
}

//destructor
account::~account() 
{
    delete Customer;
}

// add an customer to the account
void account::addOwner(customer* owner)
{
    setCustomer(owner);
}


// delete an account from the branch
void account::deleteOwner()
{
    delete Customer;
}

// Print information about the owner of the account
void account::printOwner()
{
    cout << "Customer information:\n";
   
    cout << "ID number: " << Customer->getId() << "\n";
    cout << "First name: " << Customer->getFName() << "\n";
    cout << "Last name: " << Customer->getLName() << "\n";
    cout << "Address: " << Customer->getAddress() << "\n";
    cout << "Telephone number: " << Customer->getTelephoneNumber() << "\n";
    cout << "Email: " << Customer->getEmail() << "\n";
    cout << "List of accounts: \n";
    Customer->printAccounts();
}

// set the balance of the account
void account::setBalance(float balance)
{
    this->balance = balance;
}

// set the transaction fee of the account
void account::setTransactionFee(float transactionFee)
{
    this->transactionFee = transactionFee;
}

// set the customer
void account::setCustomer(customer* Customer)
{
    this->Customer = Customer;
}

// returns the account id
int account::getAccountID()
{
    return accountId;
}

// returns the balance
float account::getBalance()
{
    return balance;
}

// returns the transaction fee
float account::getTransactionFee()
{
    return transactionFee;
}

// returns the customer
customer* account::getCustomer()
{
    return Customer;
}

