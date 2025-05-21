#include <iostream>
using namespace std;

class Math {
public:
   static int square(int x) {
       return x * x;
   }
};

int main() {
   cout << Math::square(5) << endl;  // Output: 25
}
