#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
    private:
    int accountNumber;
    std::string accountHolderName;
    double balance;

    public:
    Account(int accNumber, const std::string& accHolderName, double initialDeposit);

    int getAccountNumber() const;
    void deposit(double amount);
    bool withdraw(double amount);
    void displayAccountDetails() const;
};

#endif