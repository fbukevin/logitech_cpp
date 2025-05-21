#include <iostream>
#include <string>

class Car {
private:
   string brand;
   int speed;

public:
   // Parameterized constructor
   Car(string b, int s) {
       brand = b;
       speed = s;
   }

   void show() {
       cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
   }
};
