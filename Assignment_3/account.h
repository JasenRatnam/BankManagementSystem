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

using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class customer;
class account{
public:
    // Constructors:
    account(); // default
    account(int accountId, float balance, float transactionFee, customer* Customer); // regular
    virtual ~account(); //destructor
    
    // Add another owner to the account.
    void addOwner(customer* owner);
    // remove a given owner from the account
    void deleteOwner();
    // print the owner of the account.
    void printOwner();
    // pure virtual function to be used in derived class, 
    // makes class account abstract.
    virtual void printAccount()=0;
    
    // Setters: modify account attributes except account id
    void setBalance(float balance);
    void setTransactionFee(float transactionFee);
    void setCustomer(customer* Customer);
    
    // Getters: functions that return account attributes 
    int getAccountID();
    float getBalance();
    float getTransactionFee();
    customer* getCustomer();
    
private:

    // Data members
    int accountId;
    float balance;
    float transactionFee;
    customer* Customer;
};

#endif /* ACCOUNT_H */


