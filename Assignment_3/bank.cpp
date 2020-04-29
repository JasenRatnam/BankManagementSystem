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
#include "bank.h"
#include "customer.h"

using namespace std;

// default constructor
bank::bank() 
{
    branch branch1;
    branch branch2;
    branch branch3;
    bankId = 1;
    name = "BMO";
    addres = "500 St Jacques St, Montreal, QC";
    telephoneNumber = "(416) 867-6656";
    branches.push_back(branch1);
    branches.push_back(branch2);
    branches.push_back(branch3);
   
}

// regular constructor
bank::bank(int bankId, string name, string addres, string telephoneNumber, vector<branch> branches) 
{
    this->bankId = bankId;
    this->name = name;
    this->addres = addres;
    this->telephoneNumber = telephoneNumber;
    this->branches = branches;
}

// destructor
bank::~bank()
{
    // Not Used
}

// setter of bank name
void bank::setName(string name)
{
    this->name = name;
}

// setter of bank address
void bank::setAddress(string address)
{
    this->addres = address;
}

// setter of bank telephone number
void bank::setTelephoneNumber(string telephoneNumber)
{
    this->telephoneNumber = telephoneNumber;
}

// setter of list of branches
void bank::setListOfBranches(vector<branch> branches)
{
    this->branches = branches;
}

// returns the Id
int bank::getId()
{
    return bankId;
}

// returns the bank name
string bank::getName()
{
    return name;
}

// returns the bank address
string bank::getAddress()
{
    return addres;
}

// returns the bank telephone number
string bank::getTelephoneNumber()
{
    return telephoneNumber;
}

// returns the list of branches
vector<branch> bank::getListOfBranches()
{
    return branches;
}

// add a branch to the bank
void bank::addBranch(branch newBranch)
{
    branches.push_back(newBranch);
}

// remove a branch from the bank
void bank::deleteBranch(int branchId)
{
    int counter = 0;
    for(auto branche: branches)
    {
        if(branche.getId() == branchId) // find branch
        {
            branches.erase(branches.begin() + counter); // erase it
            break;
        }
        counter++;
    }
}

// print the list of branches of the bank
void bank::printBranches()
{
    cout << "List of branches:\n";
    int counter = 1;
    for(auto branche: branches)
    {
        cout << counter << ". " << branche.getId() << "\n";
        counter++;
    }
}

// print the list of accounts of a branch
void bank::printAccounts(int branchId)
{
    for(auto branche: branches)
    {
        if(branche.getId() == branchId) // find branch
        {
            cout << "List of accounts in the branch " << branche.getId() << ":\n";
            branche.printAccounts();
            break;
        }
    }
}

// print the list of customers of a branch
void bank::printCustomers(int branchId)
{
    for(auto branche: branches)
    {
        if(branche.getId() == branchId) // find branch
        {
            cout << "List of customers of the branch " << branche.getId() << ":\n";
            branche.printCustomers();
            break;
        }
    }
}

// print information of a branch
void bank::printBranchInfo(int branchId)
{
    cout << "Branch information:\n";
    for(auto branche: branches)
    {
        if(branche.getId() == branchId) // find branch
        {
            cout << "ID number: " << branche.getId() << "\n";
            cout << "Address: " << branche.getAddress() << "\n";
            cout << "Telephone number: " << branche.getTelephoneNumber() << "\n";
            cout << "List of accounts: \n";
            branche.printAccounts();
            break;
        }
    }
}

// print information of an account
void bank::printAccountInfo(int accountId)
{
    // find the account
    for(auto branche: branches)
    {
        vector<account*> accounts = branche.getListOfAccounts();
        
        for(auto account: accounts)
        {
            if(account->getAccountID() == accountId) // found the account
            {
                account->printAccount();
                break;
            }
        }
    }
}

// print information of a customer
void bank::printCustomerInfo(int customerId)
{
    // if customer found
    bool found = false;
    
    // find the customer
    for(auto branche: branches)
    {
        vector<account*> accounts = branche.getListOfAccounts();
        
        for(auto account: accounts)
        {
            if(account->getCustomer()->getId() == customerId) //customer found
            {
                // print info
                account->printOwner();
                found = true;
                break;
            }
        }
        
        if(found)
        {
            break;
        }
    }
}


