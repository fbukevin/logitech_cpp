#include <iostream>
using namespace std;

namespace Math {
   int add(int a, int b) {
       return a + b;
   }
}

int main() {
    cout << Math::add(2, 3);  // Output: 5
    return 0;
}

