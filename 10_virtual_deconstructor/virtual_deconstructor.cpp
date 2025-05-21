#include <iostream>
using namespace std;

class Base {
public:
   virtual ~Base() { cout << "Base destroyed\n"; }
};
