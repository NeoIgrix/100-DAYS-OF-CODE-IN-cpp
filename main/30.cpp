// Write a program to reverse a given number.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int n){
    int r = 0;
    for (int i = 0; i < n; i++)
    {
    int ld = n % 10 ;
     r = r*10;
    r=r+ld;
    n/=10;
    }
    cout << r ;
}
int main() {
    int n;
    cin >>n;
    reverse(n);
    return 0;
}