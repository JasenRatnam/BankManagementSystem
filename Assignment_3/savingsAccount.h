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
#include "account.h"

using namespace std;

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class savingsAccount: public account {
public:
    // Constructors
    savingsAccount(); // default
    savingsAccount(int accountId, float balance, float transactionFee, customer* Customer, int maxNumbTransactions, double interestRate); // regular
    virtual ~savingsAccount(); // destructor
    
    // Setters: modify savings account additional attributes 
    void setMaxNumbOfTransactions(int maxNumb);
    void setInterestRate(double interestRate);
    
    // Getters: functions that return savings account additional attribute
    int getMaxNumbOfTransactions();
    double getInterestRate();
    
    // Print information of the account
    void printAccount();
private:
    
    // Additional data members
    int maxNumbTransactions;
    double interestRate;

};

#endif /* SAVINGSACCOUNT_H */

