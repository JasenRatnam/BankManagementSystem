/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/23/2019
 * Due date: 3/4/2019
 * Assignment 3
 * Bank Management System
 * Class branch
 * Attributes: branch id, address, telephone number, list of account.
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "branch.h"
#include "customer.h"

using namespace std;

// default constructor
branch::branch() 
{
    account* account1;
    account* account2;
    account* account3;
    id = 123;
    address = "543 rue Acadie, Montreal, QC";
    telephoneNumber = "(514) 753-6393";
    accounts.push_back(account1);
    accounts.push_back(account2);
    accounts.push_back(account3);
}

// regular constructor
branch::branch(int id, string address, string telephoneNumber, vector<account*> accounts) 
{
    this->id = id;
    this->address = address;
    this->telephoneNumber = telephoneNumber;
    this->accounts = accounts;
}

// destructor
branch::~branch() 
{
    // do nothing
}

// set branch name
void branch::setAddress(string address)
{
    this->address =  address;
}

// set branch telephone number
void branch::setTelephoneNumber(string telephoneNumber)
{
    this->telephoneNumber = telephoneNumber;
}

// set list of accounts
void branch::setListOfAccounts(vector<account*> accounts)
{
    this->accounts = accounts;
}

// return branch id
int branch::getId()
{
    return id;
}

// return branch address
string branch::getAddress()
{
    return address;
}

// return branch phone number
string branch::getTelephoneNumber()
{
    return telephoneNumber;
}

// return branch list of accounts
vector<account*> branch::getListOfAccounts()
{
    return accounts;
}

// add an account to the branch
void branch::addAccount(account *newAccount)
{
    accounts.push_back(newAccount);
}

// delete an account from the branch
void branch::deleteAccount(int accountId)
{
    int counter = 0;
    // find account
    for(auto account: accounts)
    {
        if(account->getAccountID() == accountId) // found
        {
            accounts.erase(accounts.begin() + counter); // erase
            break;
        }
        counter++;
    }
}

// print list of accounts of the branch
void branch::printAccounts()
{
    int counter = 1;
    for(auto account: accounts)
    {
        cout << counter << ". " << account->getAccountID() << "\n";
        counter++;
    }
}

// print information of an account
void branch::printAccountInfo(int accountId)
{
    // find account
    for(auto account: accounts)
    {
        if(account->getAccountID() == accountId) // found
        {
            account->printAccount(); // print
            break;
        }
    }
}

// print list of customers of the branch
void branch::printCustomers()
{
    int counter = 1;
    for(auto account: accounts)
    {
        cout << counter << ". " <<  account->getCustomer()->getFName() << " " << account->getCustomer()->getLName() << "\n";
        counter++;
    }
}

// find if a given customer is a customer of a branch
bool branch::customerOfBranch(int customerId)
{
    bool customer = false;
    
    // find customer
    for(auto account: accounts)
    {
        if(account->getCustomer()->getId() == customerId) // found
        {
            customer = true;
            break;
        }
    }
    
    return customer;
}


