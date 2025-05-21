#include <iostream>

class BankAccount {
private:
   double balance;  // hidden from outside

public:
   // Constructor
   BankAccount(double initial) {
       if (initial >= 0)
           balance = initial;
       else
           balance = 0;
   }

   // Getter (read-only access)
   double getBalance() {
       return balance;
   }

   // Setter (write access with validation)
   void deposit(double amount) {
       if (amount > 0)
           balance += amount;
   }

   void withdraw(double amount) {
       if (amount > 0 && amount <= balance)
           balance -= amount;
   }
};
