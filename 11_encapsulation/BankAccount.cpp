#include "BankAccount.h"

BankAccount::BankAccount() : balance(0.0) {}

BankAccount::BankAccount(double initialBalance) : balance(initialBalance) {}

void BankAccount::deposit(double amount) {
    if (amount > 0)
        balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance)
        balance -= amount;
}

double BankAccount::getBalance() const {
    return balance;
}
