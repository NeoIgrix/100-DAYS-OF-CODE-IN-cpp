// Write a program to find the sum of digits of a number.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sum(int n){
    int s = 0;
    while (n!=0)
    {
      s+=n%10;
      n/=10;
    }
    cout << s;
}
int main() {
    int n;
    cin >> n;
    sum(n);
    return 0;
}