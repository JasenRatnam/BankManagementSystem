/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/23/2019
 * Due date: 3/4/2019
 * Assignment 3
 * Bank Management System
 * main use to test classes
 * Don't know why:
 * RUN FAILED (exit value -1,073,741,819, total time: 2s) happens sometimes.
 * continue running the program until it works.
 */

#include <cstdlib>
#include <iostream>
#include "account.h"
#include "bank.h"
#include "branch.h"
#include "chequingAccount.h"
#include "customer.h"
#include "savingsAccount.h"

using namespace std;

int main() 
{
    // TEST BANK
    // Creating initial objects
    
    // Initialize bank information
    int bankID = 324;
    string name = "TD";
    string address = "536 rue Mont-Royal, MTL, QC";
    string telephone = "(514) 356-7473" ;
    
    // Create an empty vector of accounts for customer
    vector<account*> cusAccounts1;
    vector<account*> cusAccounts2;
    vector<account*> cusAccounts3;
    vector<account*> cusAccounts4;
    vector<account*> cusAccounts5;
    
    // creating a customer
    customer Customer1(1, "Jasen", "Ratnam", "500 St Jacques St, Montreal, QC", "(514) 715-2346", "jasenrock@gmail.com", cusAccounts1);
    customer Customer2(2, "Sponge", "Bob", "5624 rue Chabanel, Montreal, QC", "(514) 755-2346", "jasenrock@gmail.com", cusAccounts2);
    customer Customer3(3, "Turkey", "Man", "871, rue St-Laurent, Montreal, QC", "(514) 271-5632", "jasenrock@gmail.com", cusAccounts3);
    customer Customer4(4, "Ali", "Turkman", "9875 rue Stuart, Montreal, QC", "(514) 277-7627", "jasenrock@gmail.com", cusAccounts4);
    customer Customer5(5, "Dora", "Explorer", "3837 rue Birnam, Montreal, QC", "(514) 763-5362", "jasenrock@gmail.com", cusAccounts5);
    

    // creating 2 savings accounts
    savingsAccount account1(362, 154.65, 15.60, &Customer1, 10, 22.5);
    savingsAccount account2(765, 145.54, 14.50, &Customer2, 15, 19.7);
    
    // creating 3 chequings account
    chequingAccount account3(235, 15.54, 1.50, &Customer3, true, 150.4);
    chequingAccount account4(755, 1547.54, 4.50, &Customer4, false, 99.5);
    chequingAccount account5(737, 1261.54, 21.50, &Customer5, false, 63.5);
    
    // add accounts to customer
    Customer1.addAccount(&account1);
    Customer2.addAccount(&account2);
    Customer3.addAccount(&account3);
    Customer4.addAccount(&account4);
    Customer5.addAccount(&account5);
    
    // Create an empty vectors of accounts for branches
    vector<account*> accounts1;
    vector<account*> accounts2;
    vector<account*> accounts3;
    
    // creating bank branches
    branch branch1(1, "543 rue Jarry, Montreal, QC", "(514) 363-7363",accounts1);
    branch branch2(2, "7857 rue Ball, Montreal, QC", "(514) 673-7763",accounts2);
    branch branch3(3, "6537 rue Jean-Talon, Montreal, QC", "(514) 762-7184",accounts3);
    
    // add accounts to branches
    branch1.addAccount(&account1);
    branch1.addAccount(&account3);
    branch2.addAccount(&account2);
    branch2.addAccount(&account4);
    branch3.addAccount(&account5);
    
    // Create an empty vector of branches for bank
    vector<branch> branches;
    
    // create bank object
    bank Bank(bankID, name, address, telephone, branches);
    
    // add branches to bank.
    Bank.addBranch(branch1);
    Bank.addBranch(branch2);
    
    //||||||||||||||||||test methods of bank||||||||||||||||
    
    // Add branch 3 to bank
    Bank.addBranch(branch3);
    
    // Print branch 3 info
    Bank.printBranchInfo(3);
    cout << "\nBranch 3 added to bank\n\n";
    
    // print all branches in bank
    Bank.printBranches();
    cout << "\n";
    
    // print all accounts in branch 2
    Bank.printAccounts(2);
    cout << "\n";
    
    // print all customers in branch 2
    Bank.printCustomers(1);
    cout << "\n";
    
    // Print info about first account
    cout << "Information about the first account:\n";
    Bank.printAccountInfo(362);
    cout << "\n";
    
    // Print info about customer
    Bank.printCustomerInfo(1);
    cout << "\n";
    
    // delete the first branch
    Bank.deleteBranch(1);
    cout << "Branch 1 deleted from bank\n\n";
    
    // print leftover branches
    Bank.printBranches();
    cout << "\n";
    
    
    //||||||||||||||||test methods of branch||||||||||||||||||||
    
    // information of account 765
    branch2.printAccountInfo(765);
    cout << "\n";
    
    // delete account 765 from branch 
    branch2.deleteAccount(765);
    cout << "Account 765 has been deleted from branch 2\n";
    branch2.printAccounts();
    cout << "\n";
    
    // customers of branch 2
     cout << "Customers of branch 2 are:\n";
    branch2.printCustomers();
    cout << "\n";
    
    if(branch2.customerOfBranch(1))
    {
        cout << "customer 1 is a customer of the second branch\n";
    }
    else
    {
        cout << "customer 1 is not a customer of the second branch\n";
    }
    
    // All other functions of classes are included in the functions already used.
    
    return 0;
}

