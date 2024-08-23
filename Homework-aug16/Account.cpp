#include "Account.h"
#include <iostream>

Account::Account(int accNumber, const std::string& accHolderName, double initialDeposit)
    : accountNumber(accNumber), accountHolderName(accHolderName), balance(initialDeposit) {}

int Account::getAccountNumber() const {
    return accountNumber;
}

void Account::deposit(double amount) {
    if(amount > 0) {
        balance += amount;
        std::cout << "Deposited " << amount << "$. New balance: " << balance << "$" << std::endl;
    } else {
        std::cout << "Invalid deposit amount..." << std::endl;
    }
}

bool Account::withdraw(double amount) {
    if(amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << amount << "$ have been withdrawn. New balance: " << balance << "$" << std::endl;
        return true;
    } else {
        std::cout << "Insufficient funds or invalid amount!" << std::endl;
        return false;
    }
}

void Account::displayAccountDetails() const {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Account Holder: " << accountHolderName << std::endl;
    std::cout << "Balance: " << balance << "$" << std::endl;
}
