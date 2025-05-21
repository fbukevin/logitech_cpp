#include <iostream>
using namespace std;
template<typename T>
class Box {
   T value;
public:
   Box(T v) : value(v) {}
   T get() const { return value; }
};

int main() {
   Box<int> b1(42);
   Box<std::string> b2("Hello");

   std::cout << b1.get() << ", " << b2.get() << '\n';
}
