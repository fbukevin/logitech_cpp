class Complex {
public:
   int real, imag;

   Complex(int r, int i) : real(r), imag(i) {}

   Complex operator + (const Complex& other) {
       return Complex(real + other.real, imag + other.imag);
   }
};
