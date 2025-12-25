// Write a program to find the product of odd digits of a number.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void product(int n){
    int p = 1;
    bool found = false;
    while (n!=0)
    {
      int ld = n%10;
      n/=10;
      if (ld%2!=0)
      {
        p*=ld;
        found = true;
      }
      
    }
    if (found)
        cout << p;
    else
        cout << 0;
}
int main() {
    int n;
    cin >> n;
    product(n);
    return 0;
}