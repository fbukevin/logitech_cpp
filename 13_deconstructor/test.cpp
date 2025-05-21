#include <iostream>
class Test {
public:
   Test() {
       cout << "Constructor called\n";
   }

   ~Test() {
       cout << "Destructor called\n";
   }
};

int main() {
   Test t;  // Constructor runs here
}           // Destructor runs here (when 't' goes out of scope)
