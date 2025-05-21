#include <iostream>
using namespace std;
class Counter {
public:
   static int count;  // Declaration

   Counter() {
       count++;
   }
};

// Definition outside the class
int Counter::count = 0;

int main() {
   Counter a, b, c;
   cout << "Count: " << Counter::count << endl;  // Output: Count: 3
}
