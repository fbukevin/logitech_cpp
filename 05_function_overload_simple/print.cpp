#include <iostream>
#include <string>
using namespace std;
class Print {
public:
   void show(int x) {
       cout << "Integer: " << x << endl;
   }

   void show(string s) {
       cout << "String: " << s << endl;
   }
};
