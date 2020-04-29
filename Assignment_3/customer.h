/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/23/2019
 * Due date: 3/4/2019
 * Assignment 3
 * Bank Management System
 * Class customer
 * Attributes: customer ID, first name, last name, address, telephone number, email, list of accounts
 */


#include <iostream>
#include <vector>
#include "account.h"
using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class customer {
public:
    // Constructors:
    customer(); // default
    customer(int id, string FName, string LName, string address, string telephoneNumber, string email, vector<account*> accounts); // regular
    virtual ~customer(); // destructor
    
    // Setters: modify customer attributes except customer id
    void setFName(string Fname);
    void setLName(string Lname);
    void setAddress(string address);
    void setTelephoneNumber(string telephoneNumber);
    void setEmail(string email);
    void setListOfAccounts(vector<account*> accounts);
    
    // Getters: functions that return chequing account additional attribute
    int getId();
    string getFName();
    string getLName();
    string getAddress();
    string getTelephoneNumber();
    string getEmail();
    vector<account*> getListOfAccounts();
    
    // Add another account to the list of accounts of the customer.
    void addAccount(account* newAccount);
    // remove a given account from the branch
    void deleteAccount(int accountId);
    // print a list of all accounts
    void printAccounts();
    // print a list of all chequing accounts
    void printChequingAccounts();
    // print a list of all savings accounts
    void printSavingAccounts();
    
private:
    // data members
    int id;
    string FName;
    string LName;
    string address;
    string telephoneNumber;
    string email;
    vector<account*> accounts;
};

#endif /* CUSTOMER_H */

