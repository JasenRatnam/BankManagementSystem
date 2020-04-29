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
#include "account.h"

using namespace std;

#ifndef BRANCH_H
#define BRANCH_H

class branch {
public:
    // Constructors:
    branch(); // default
    branch(int id, string address, string telephoneNumber, vector<account*> accounts); // regular
    virtual ~branch(); // destructor
    
    // Setters: modify branch attributes except branch id
    void setAddress(string address);
    void setTelephoneNumber(string telephoneNumber);
    void setListOfAccounts(vector<account*> accounts);
    
    // Getters: functions that return branch attributes 
    int getId();
    string getAddress();
    string getTelephoneNumber();
    vector<account*> getListOfAccounts();
    
    // Add another account to the list of accounts of the branch.
    void addAccount(account *newAccount);
    // remove a given account from the branch
    void deleteAccount(int accountId);
    // print a list of all accounts
    void printAccounts();
    // print information about a given account
    void printAccountInfo(int accountId);
    // print a list of all customers of a given branch
    void printCustomers();
    // return true if a given customer is a customer of this branch
    bool customerOfBranch(int customerId);
    
private:
    // Data members
    int id;
    string address;
    string telephoneNumber;
    vector<account*> accounts;

};

#endif /* BRANCH_H */

