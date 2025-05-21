#include <iostream>
#include <stdexcept>

void divide(int a, int b) {
   if (b == 0)
       throw std::invalid_argument("Division by zero");
   std::cout << "Result: " << a / b << '\n';
}

int main() {
   try {
       divide(10, 0);
   } catch (const std::exception& e) {
       std::cerr << "Caught exception: " << e.what() << '\n';
   }
}
