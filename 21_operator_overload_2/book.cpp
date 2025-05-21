#include <iostream>
using namespace std;

class Book {
private:
   string title;

public:
   Book(string t) : title(t) {}

   // Friend function to overload <<
   friend ostream& operator<<(ostream& out, const Book& b);
};

ostream& operator<<(ostream& out, const Book& b) {
   out << "Book Title: " << b.title;
   return out;
}

int main() {
   Book b("C++ Basics");
   cout << b << endl;  // Output: Book Title: C++ Basics
}
