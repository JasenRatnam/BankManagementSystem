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
#include "account.h"
using namespace std;

#ifndef CHEQUINGACCOUNT_H
#define CHEQUINGACCOUNT_H

class chequingAccount: public account {
public:
    // constructors:
    chequingAccount(); // default
    chequingAccount(int accountId, float balance, float transactionFee, customer* Customer, bool chequePrivelage, float overdraftLimit); // regular
    virtual ~chequingAccount(); // destructor
    
    // Setters: modify chequing account additional attributes 
    void setChequePrivilege(bool chequePrivelage);
    void setOverdraft(float overdraftLimit);
    
    // Getters: functions that return chequing account additional attribute
    bool getChequePrivilege();
    float getOverdraft();
    
    // Print information of the account
    void printAccount();
    
private:
    
    // Additional data members
    bool chequePrivelage;
    float overdraftLimit;

};

#endif /* CHEQUINGACCOUNT_H */

