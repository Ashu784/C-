#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex& c) {
        Complex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }

    // Overloading the '-' operator
    Complex operator-(const Complex& c) {
        Complex res;
        res.real = real - c.real;
        res.imag = imag - c.imag;
        return res;
    }

    // Overloading the '++' operator
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // Overloading the '<<' operator
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1(5, 4), c2(2, 3);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    ++c1;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 - c2 = " << c4 << endl;
    return 0;
}
