#include <iostream>
using namespace std;
class Car {
private:
   int speed; // Hidden from outside
public:
   void start() {
       // Complex logic hidden from user
       cout << "Car started" << endl;
   }
   void stop() {
       cout << "Car stopped" << endl;
   }
};
