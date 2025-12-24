// Write a program to check if a number is prime.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void isprime(int n){
    if (n <= 1) {
        cout << "composite\n";
        return;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "composite\n";
            return;  // stop here
        }
    }

    cout << "prime\n";  // only reaches this if no divisor is found
}

int main() {
    int n;
    cin >> n;
    isprime(n);
    return 0;
}