#include "Bank.h"
#include <iostream>

Account* Bank::findAccount(int accountNumber) {
    for(auto& account : accounts) {
        if(account.getAccountNumber() == accountNumber) {
            return &account;
        }
    }
    return nullptr;
}

void Bank::createAccount(const std::string& accountHolderName, double initialDeposit) {
    Account newAccount(nextAccountNumber++, accountHolderName, initialDeposit);
    accounts.push_back(newAccount);
    std::cout << "Account has been created succesfully!" << std::endl;
}

void Bank::depositToAccount(int accountNumber, double amount) {
    Account* account = findAccount(accountNumber);
    if(account) {
        account->deposit(amount);
    } else {
        std::cout << "Account could NOT be found..." << std::endl;
    }
}

void Bank::withdrawFromAccount(int accountNumber, double amount) {
    Account* account = findAccount(accountNumber);
    if(account) {
        account->withdraw(amount);
    } else {
        std::cout << "Account could NOT be found..." << std::endl;
    }
}

void Bank::displayAccountDetails(int accountNumber) {
    Account* account = findAccount(accountNumber);
    if(account) {
        account->displayAccountDetails();
    } else {
        std::cout << "Account could NOT be found..." << std::endl;
    }
}