#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
public:
    BankAccount();                       // 建構子
    BankAccount(double initialBalance);  // 帶參數建構子

    void deposit(double amount);         // 存款
    void withdraw(double amount);        // 提款
    double getBalance() const;           // 查詢餘額

private:
    double balance;                      // 餘額
};

#endif // BANKACCOUNT_H
