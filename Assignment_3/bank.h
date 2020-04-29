/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/23/2019
 * Due date: 3/4/2019
 * Assignment 3
 * Bank Management System
 * Class bank
 * Attributes: bank id, name, address, telephone number, list of branches.
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "branch.h"

using namespace std;

#ifndef BANK_H
#define BANK_H

class bank {
public:
    
    // constructors:
    bank(); // default
    bank(int bankId, string name, string addres, string telephoneNumber, vector<branch> branches); // regular
    virtual ~bank(); // destructor
    
    // Setters: modify bank attributes except bank id
    void setName(string name);
    void setAddress(string address);
    void setTelephoneNumber(string telephoneNumber);
    void setListOfBranches(vector<branch> branches);
    
    // Getters: functions that return bank attributes
    int getId();
    string getName();
    string getAddress();
    string getTelephoneNumber();
    vector<branch> getListOfBranches();
    
    // Add another branch to the list of branches of the bank.
    void addBranch(branch newBranch);
    // remove a given branch from the bank
    void deleteBranch(int branchId);
    // print a list of all branches
    void printBranches();
    // print a list of all accounts of a given branch
    void printAccounts(int branchId);
    // print a list of all customers of a given branch
    void printCustomers(int branchId);
    // print information about a given branch
    void printBranchInfo(int branchId);
    // print information about a given account
    void printAccountInfo(int accountId);
    // print information about a given customer
    void printCustomerInfo(int customerId);
    
private:
    
    // data members
    int bankId;
    string name;
    string addres;
    string telephoneNumber;
    vector<branch> branches;
};

#endif /* BANK_H */

