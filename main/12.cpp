// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <iostream>
using namespace std;

void nested(int n) {
    if (n == 0) {
        cout << "number is zero";
    } else {
        if (n > 0) {
            cout << "number is positive";
        } else {
            cout << "number is negative";
        }
    }
}

int main() {
    int n;
    cin >> n;
    nested(n);
    return 0;
}
