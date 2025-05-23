#include <iostream>
using namespace std;

class Point {
private:
   int x, y;

public:
   Point(int a = 0, int b = 0) : x(a), y(b) {}

   // Overload + operator
   Point operator+(const Point& p) {
       return Point(x + p.x, y + p.y);
   }

   void show() {
       cout << "(" << x << ", " << y << ")" << endl;
   }
};

int main() {
   Point p1(2, 3), p2(4, 5);
   Point p3 = p1 + p2;  // Uses overloaded +
   p3.show();           // Output: (6, 8)
}
