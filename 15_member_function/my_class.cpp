#include <iostream>
using namespace std;
class MyClass {
public:
   void greet();  // Declaration
};

void MyClass::greet() {
   cout << "Hello from MyClass!" << endl;
}
int main() {
   MyClass obj;  // Create an object of MyClass
   obj.greet();  // Call the greet method
   return 0;
}