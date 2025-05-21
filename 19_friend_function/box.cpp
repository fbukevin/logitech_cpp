#include <iostream>
using namespace std;

class Box {
private:
   int length;

public:
   Box() : length(0) {}

   // Declare friend function
   friend void setLength(Box&, int);
};

// Friend function definition
void setLength(Box& b, int len) {
   b.length = len;
   cout << "Length set to: " << b.length << endl;
}

int main() {
   Box b;
   setLength(b, 10);  // Accessing private member using friend
}
