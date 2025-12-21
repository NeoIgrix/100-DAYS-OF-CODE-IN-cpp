// Write a program to find and display the sum of the first n natural numbers

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int x){
    return (x*(x+1)) / 2;
}
int main() {
    int x;
    cin >> x;
    cout << "sum of first " << x << " numbers is\n" << sum(x);
    return 0;
}