#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Friend function declarations
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in, Complex &c);
};

// Overload << operator
ostream & operator << (ostream &out, const Complex &c) {
    out << c.real << "+i" << c.imag << endl;
    return out;
}

// Overload >> operator
istream & operator >> (istream &in, Complex &c) {
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}

int main() {
    cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;
    Complex c1;
    Complex c2;
    cin >> c1;
    cin >> c2;
    cout << "The complex object is ";
    cout << c1;
    cout << c2;
    return 0;
}
