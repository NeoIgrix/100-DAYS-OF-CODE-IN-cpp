// Write a program to find the roots of a quadratic equation and categorize them.

#include <iostream>
#include <cmath>
using namespace std;

void quad(int a, int b, int c) {
    int d = b*b - 4*a*c;

    if (d > 0)
        cout << "Roots are real and different\n";
    else if (d == 0)
        cout << "Roots are real and same\n";
    else
        cout << "Roots are complex\n";
}

void root(int a, int b, int c) {
    int d = b*b - 4*a*c;

    if (d >= 0) {
        float r1 = (-b + sqrt(d)) / (2*a);
        float r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are: " << r1 << " and " << r2 << endl;
    } else {
        float real = -b / (2.0*a);
        float imag = sqrt(-d) / (2.0*a);
        cout << "Roots are: "
             << real << " + " << imag << "i and "
             << real << " - " << imag << "i\n";
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    quad(a, b, c);
    root(a, b, c);

    return 0;
}
