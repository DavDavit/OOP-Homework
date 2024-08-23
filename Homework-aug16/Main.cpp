#include "Bank.h"
#include <iostream>

int main() {
    Bank bank;

    bank.createAccount("Sponge Bob", 1000);
    bank.depositToAccount(1, 500);
    bank.withdrawFromAccount(1, 200);
    bank.displayAccountDetails(1);

    return 0;
}
