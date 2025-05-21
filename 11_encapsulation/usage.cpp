#include <iostream>
#include "BankAccount.h"
using namespace std;

// Usage
int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}
