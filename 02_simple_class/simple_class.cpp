#include <iostream>
using namespace std;

class Car {
private:
   string brand;
   int speed;

public:
   // Constructor
   Car(string b, int s) {
       brand = b;
       speed = s;
   }

   // Member function
   void display() {
       cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
   }
};
