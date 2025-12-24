// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void leap(int n) {
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        cout << "this is a leap year";
    } else {
        cout << "this is not a leap year";
    }
}

int main() {
    int n;
    cin >> n;
    leap(n);
    return 0;
}