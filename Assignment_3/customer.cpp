/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/23/2019
 * Due date: 3/4/2019
 * Assignment 3
 * Bank Management System
 * Class customer
 * Attributes: customer ID, first name, last name, address, telephone number, email, list of accounts
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "customer.h"

using namespace std;

// default constructor
customer::customer() 
{
    id = 40094237;
    FName = "JASEN";
    LName = "RATNAM";
    address = "543 rue Jarry, Montreal, QC";
    telephoneNumber = "(514) 575-5738";
    email = "jasenrock@gmail.com";
    account* account1;
    account* account2;
    account* account3;
    accounts.push_back(account1);
    accounts.push_back(account2);
    accounts.push_back(account3);
}

// regular constructor
customer::customer(int id, string FName, string LName, string address, string telephoneNumber, string email, vector<account*> accounts) 
{
    this->id = id;
    this->FName = FName;
    this->LName = LName;
    this->address = address;
    this->telephoneNumber = telephoneNumber;
    this->email = email;
    this->accounts = accounts;
}

// destructor
customer::~customer() 
{
    // do nothing
}

// set the customers first name
void customer::setFName(string Fname)
{
    this->FName = Fname;
}

// set the customers last name
void customer::setLName(string Lname)
{
    this->LName = Lname;
}

// set the customers address
void customer::setAddress(string address)
{
    this->address = address;
}

// set the customers phone number
void customer::setTelephoneNumber(string telephoneNumber)
{
    this->telephoneNumber = telephoneNumber;
}

// set the customers email
void customer::setEmail(string email)
{
    this->email = email;
}

// set the customers list of accounts
void customer::setListOfAccounts(vector<account*> accounts)
{
    this->accounts = accounts;
}

// returns the account id
int customer::getId()
{
    return id;
}

// returns the first name
string customer::getFName()
{
    return FName;
}

// returns the last name
string customer::getLName()
{
    return LName;
}

// returns the address
string customer::getAddress()
{
    return address;
}

// returns the telephone number
string customer::getTelephoneNumber()
{
    return telephoneNumber;
}

// returns the email
string customer::getEmail()
{
    return email;
}

// returns the list of accounts
vector<account*> customer::getListOfAccounts()
{
    return accounts;
}

// add an account to the list of accounts
void customer::addAccount(account* newAccount)
{
    accounts.push_back(newAccount);
}

// delete an account from the lsit
void customer::deleteAccount(int accountId)
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

// print the list of accounts
void customer::printAccounts()
{
    int counter = 1;
    for(auto account: accounts)
    {
        cout << counter << ". " << account->getAccountID() << "\n";
        counter++;
    }
}

// print the list of chequing accounts
void customer::printChequingAccounts()
{
    int counter = 1;
    for(auto account: accounts)
    {
        cout << counter << ". " << account->getAccountID() << "\n";
        counter++;
    }
}

// print the list of savings accounts
void customer::printSavingAccounts()
{
    int counter = 1;
    for(auto account: accounts)
    {
        cout << counter << ". " << account->getAccountID() << "\n";
        counter++;
    }
}


