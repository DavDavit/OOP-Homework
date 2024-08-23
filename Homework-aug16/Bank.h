#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Account.h"

class Bank {
    private:
    std::vector<Account> accounts;
    int nextAccountNumber = 1;

    Account* findAccount(int accountNumber);

    public:
    void createAccount(const std::string& accountHolderName, double initialDeposit);
    void depositToAccount(int accountNumber, double amount);
    void withdrawFromAccount(int accountNumber, double amount);
    void displayAccountDetails(int accountNumber);
};

#endif
