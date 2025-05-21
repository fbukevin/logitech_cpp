class MyNumber {
   int value;
public:
   MyNumber(int x) : value(x) {}

   // Conversion function
   operator int() {
       return value;
   }
};

int main() {
   MyNumber m(10);
   int x = m;  // uses operator int()
}
