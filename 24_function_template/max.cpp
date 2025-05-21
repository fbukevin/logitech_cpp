#include <iostream>
using namespace std;
template<typename T>
T max(T a, T b) {
   return (a > b) ? a : b;
}

int main() {
   std::cout << max(3, 7) << '\n';         // int
   std::cout << max(2.5, 3.8) << '\n';     // double
   std::cout << max('a', 'z') << '\n';     // char
}
